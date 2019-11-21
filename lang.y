%code requires{
#include "Table_des_symboles.h"
#include "Attribute.h"
 }

%{

#include <stdio.h>
#include <string.h>
  
extern int yylex();
extern int yyparse();

void yyerror (char* s) {
  printf ("%s\n",s);
}
		
%}

%union { 
	attribute val;
	char* str;
	type typ;
	int num;
}
%token <val> NUMI NUMF
%token <val> ID
%token TINT TFLOAT STRUCT
%token AO AF PO PF PV VIR
%token RETURN VOID EQ
%token <val> IF ELSE WHILE

%token <val> AND OR NOT DIFF EQUAL SUP INF
%token PLUS MOINS STAR DIV
%token DOT ARR

%type <val> exp type vir
%type <str> vlist 
%type <typ> typename 
%type <num> while_cond while bool_cond else pointer

%left DIFF EQUAL SUP INF       // low priority on comparison
%left PLUS MOINS               // higher priority on + - 
%left STAR DIV                 // higher priority on * /
%left OR                       // higher priority on ||
%left AND                      // higher priority on &&
%left DOT ARR                  // higher priority on . and -> 
%nonassoc UNA                  // highest priority on unary operator
 
%start prog  

%%

prog : block                   { ; }
;


oblock: AO                     { enter_block(); }
;

fblock: AF                     { exit_block(); }
;

block:
decl_list inst_list            { ; }
;

// I. Declarations

decl_list : decl decl_list     { ; }
|                              { ; }
;

decl: var_decl PV              { ; }
| struct_decl PV               {}
| fun_decl                     {}
;

// I.1. Variables
var_decl : type vlist          { /* FOR DEBUG */ fprintf(stdout, "// %s(%d) %s;\n",print_type($1->type_val),$1->num_star,$2); }
;

// I.2. Structures
struct_decl : STRUCT ID struct {}
;

struct : AO attr AF            {}
;

attr : type ID                 {}
| type ID PV attr              {}

// I.3. Functions

fun_decl :
type fun_head fun_body         { fprintf(stdout, "func\n");}
;


fun_head : ID PO PF            {}
| ID PO params PF              {}
;

params: type ID vir params     {}
| type ID                      {}

vlist: ID vir vlist            { if (exist_symbol_value($1->name)) print_error("already declared");
                                 $1->type_val = ($<val>0->type_val);
                                 $1->num_star = ($<val>0->num_star);
                                 $1->num_block = curr_block();
                                 fprintf(stdout,"%s %s%s;\n",print_type($1->type_val),print_star($1->num_star),$1->name);
                                 set_symbol_value($1->name,$1);
                                 /* FOR DEBUG */  $$ = str_concat($1->name,str_concat(",",$3)); }
| ID                           { if (exist_symbol_value($1->name)) print_error("already declared");
                                 $1->type_val = ($<val>0->type_val);
                                 $1->num_star = ($<val>0->num_star);
                                 $1->num_block = curr_block();
                                 fprintf(stdout,"%s %s%s;\n",print_type($1->type_val),print_star($1->num_star),$1->name);
                                 set_symbol_value($1->name,$1);
                                 /* FOR DEBUG */ $$ = $1->name; }
;

vir : VIR                      { attribute x = copy_attribute($<val>-1); x->num_star=0; $$ = x;}
;

fun_body :
oblock block fblock           {}
;

// I.4. Types
type
: typename pointer             { attribute x = new_attribute();
                                 x->type_val = $1;
                                 x->num_star = $2;
                                 $$ = x;
                               }
| typename                     { attribute x = new_attribute();
                                 x->type_val = $1;
                                 x->num_star = 0;
                                 $$ = x; }
;

typename
: TINT                          { $$ = INT; }
| TFLOAT                        { $$ = FLOAT; }
| VOID                          { $$ = VOD; }
| STRUCT ID                     { $$ = STRCT; }
;

pointer
: pointer STAR                 { $$ = $1 + 1; } 
| STAR                         { $$ = 1; }
;


// II. Intructions

inst_list: inst inst_list   {}
//| inst                      { ; }
|                           { ; }
;

inst:
oblock block fblock           { ; }
| aff PV                      { ; }
| ret PV                      { ; }
| cond                        { ; }
| loop                        { ; }
//| PV                          {}
;

// II.1 Affectations

aff : ID EQ exp               { attribute x = get_symbol_value($1->name);
                                if (!type_compatible(x,$3)) print_error("non compatible types");
                                fprintf(stdout, "%s = r%d;\n",x->name,$3->reg_num);
                                /* FOR DEBUG */ fprintf(stdout, "// %s = %s;\n",x->name,$3->name);
                              }
| STAR exp EQ exp             { if (!type_compatible($2,$4)) print_error("non compatible types");
                                fprintf(stdout, "*r%d = r%d;\n",$2->reg_num,$4->reg_num);
                              }
;


// II.2 Return
ret : RETURN exp              {}
| RETURN PO PF                {} // ERROR ??? RETURN PO exp PF
;

// II.3. Conditionelles
cond :
if bool_cond inst else inst   { fprintf(stdout,"label%d:\n",$4); } //inst <=> stat
|  if bool_cond inst          { fprintf(stdout,"label%d:\n",$2); }
;

bool_cond : PO exp PF         { int x = new_label();
                                fprintf(stdout,"if (!r%d) goto label%d;\n",$2->reg_num,x);
                                $$ = x; }
;

if : IF                       {}
;

else : ELSE                   { int x = new_label();
                                fprintf(stdout,"goto label%d;\nlabel%d:\n",x,$<num>-1);
                                $$ = x; }
;

// II.4. Iterations

loop : while while_cond inst  { fprintf(stdout,"goto label%d;\nlabel%d:\n",$1,$2); }
;

while_cond : PO exp PF        { int x = new_label();
                                fprintf(stdout,"if (!r%d) goto label%d;\n",$2->reg_num,x);
                                $$=x; }

while : WHILE                 { int x = new_label();
                                fprintf(stdout,"label%d:\n",x);
                                $$=x; }
;


// II.3 Expressions
exp
// II.3.0 Exp. arithmetiques
: MOINS exp %prec UNA         { attribute x = new_attribute();
                                x->type_val = $2->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = - r%d;\n",x->reg_num,$2->reg_num);
                                $$ = x; }
| exp PLUS exp                { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d + r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; }
| exp MOINS exp               { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d - r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; }
| exp STAR exp                { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d * r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; }
| exp DIV exp                 { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d / r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; }
| PO exp PF                   { $$ = $2; }
| ID                          { attribute x = get_symbol_value($1->name);
                                if (!in_block(x)) print_error("not declared\n");
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = %s;\n",x->reg_num,x->name);
                                $$ = x; }
| NUMI                        { $1->reg_num = new_register($1); fprintf(stdout,"r%d = %s;\n",$1->reg_num,$1->name); $$ = $1; }
| NUMF                        { $1->reg_num = new_register($1); fprintf(stdout,"r%d = %s;\n",$1->reg_num,$1->name); $$ = $1; }

// II.3.1 Déréférencement

| STAR exp %prec UNA          { attribute x = copy_attribute($2);
                                x->num_star--;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = *r%d;\n",x->reg_num,$2->reg_num);
                                $$ = x; 
                              }

// II.3.2. Booléens

| NOT exp %prec UNA           {}
| exp INF exp                 { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d < r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; }
| exp SUP exp                 { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d > r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; } // SIDI
| exp EQUAL exp               { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d == r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; } // SIDI
| exp DIFF exp                { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d != r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; } // SIDI
| exp AND exp                 { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d & r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; } // SIDI
| exp OR exp                  { if ($1->type_val != $3->type_val) print_error("non compatible types");
                                attribute x = new_attribute();
                                x->type_val = $1->type_val;
                                x->reg_num = new_register(x);
                                fprintf(stdout,"r%d = r%d | r%d;\n",x->reg_num,$1->reg_num,$3->reg_num);
                                $$ = x; } // SIDI

// II.3.3. Structures

| exp ARR ID                  {}
| exp DOT ID                  {}

| app                         {}
;
       
// II.4 Applications de fonctions

app : ID PO args PF;

args :  arglist               {}
|                             {}
;

arglist : exp VIR arglist     {}
| exp                         {}
;



%% 

int main () { printf ("? "); return yyparse ();} 

