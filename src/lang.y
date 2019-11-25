%code requires{
#include "Table_des_symboles.h"
#include "Attribute.h"
}

%{

#include <stdio.h>
#include <string.h>

FILE * filec;
FILE * fileh;

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

%type <val> exp type vir app
%type <str> vlist
%type <typ> typename
%type <num> while_cond while bool_cond else pointer fun_head fun_id pre_args

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
var_decl : type vlist          { /* FOR DEBUG */ fprintf(fileh, "// %s(%d) %s;\n",print_type($1->type_val),$1->num_star,$2); }
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
type fun_head fun_body         { /* FOR DEBUG */ fprintf(filec, "// func \n"); }
;


fun_head : fun_id PO PF            { $$ = $1; }
| fun_id PO params PF              { $$ = $1; }
;

fun_id : ID                         { $1->num_label = new_label();
                                      $1->type_ret = $<val>0->type_val;
                                      $1->type_val = FUNC;
                                      set_symbol_value($1->name,$1);
                                      int x = new_label();
                                      fprintf(filec,"goto label%d;\n",x);
                                      fprintf(filec,"label%d:\n",$1->num_label);
                                      $$ = x;
                                    }
;

params: type ID vir params     { if (exist_symbol_value($2->name)) print_error("already declared");
                                 $2->type_val = ($1->type_val);
                                 $2->num_star = ($1->num_star);
                                 $2->num_block = curr_block();
                                 fprintf(fileh,"%s %s%s;\n",print_type($2->type_val),print_star($2->num_star),$2->name);
                                 $2->reg_num = new_register($2);
                                 fprintf(filec,"r%d=pile[--pile_i].%s_%s; //depiler\n",
                                                $2->reg_num, print_type($2->type_val),
                                                ($2->num_star > 0)?"p":"val");
                                 fprintf(filec,"%s = r%d;\n",$2->name,$2->reg_num);
                                 set_symbol_value($2->name,$2);
                                 /* FOR DEBUG */ //$$ = $2->name;
                                 }
| type ID                      { if (exist_symbol_value($2->name)) print_error("already declared");
                                 $2->type_val = ($1->type_val);
                                 $2->num_star = ($1->num_star);
                                 $2->num_block = curr_block();
                                 fprintf(fileh,"%s %s%s;\n",print_type($2->type_val),print_star($2->num_star),$2->name);
                                 $2->reg_num = new_register($2);
                                 fprintf(filec,"r%d=pile[--pile_i].%s_%s; //depiler\n",
                                                $2->reg_num, print_type($2->type_val),
                                                ($2->num_star > 0)?"p":"val");
                                 fprintf(filec,"%s = r%d;\n",$2->name,$2->reg_num);
                                 set_symbol_value($2->name,$2);
                                 /* FOR DEBUG */ //$$ = $2->name;
                                 }

vlist: ID vir vlist            { if (exist_symbol_value($1->name)) print_error("already declared");
                                 $1->type_val = ($<val>0->type_val);
                                 $1->num_star = ($<val>0->num_star);
                                 $1->num_block = curr_block();
                                 fprintf(fileh,"%s %s%s;\n",print_type($1->type_val),print_star($1->num_star),$1->name);
                                 set_symbol_value($1->name,$1);
                                 if ($1->num_star > 0) {
                                      fprintf(filec,"%s = (%s%s)malloc(sizeof(%s%s));\n", $1->name,
                                              print_type($1->type_val),print_star($1->num_star),
                                              print_type($1->type_val),print_star($1->num_star)
                                              );
                                  }
                                 /* FOR DEBUG */  $$ = str_concat($1->name,str_concat(",",$3)); }
| ID                           { if (exist_symbol_value($1->name)) print_error("already declared");
                                 $1->type_val = ($<val>0->type_val);
                                 $1->num_star = ($<val>0->num_star);
                                 $1->num_block = curr_block();
                                 fprintf(fileh,"%s %s%s;\n",print_type($1->type_val),print_star($1->num_star),$1->name);
                                 set_symbol_value($1->name,$1);
                                 if ($1->num_star > 0) {
                                      fprintf(filec,"%s = (%s%s)malloc(sizeof(%s%s));\n", $1->name,
                                              print_type($1->type_val),print_star($1->num_star),
                                              print_type($1->type_val),print_star($1->num_star)
                                              );
                                  }
                                 /* FOR DEBUG */ $$ = $1->name; }
;

vir : VIR                      { $$ = $<val>-1; }

fun_body :
oblock block fblock           { fprintf(filec,"retReg=pile[--pile_i].addr; //depiler\n");
                                fprintf(filec,"goto *retReg;\n");
                                fprintf(filec,"label%d:\n",$<num>0);
                              }
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
|                           { ; }
;

inst:
oblock block fblock           { /* FOR DEBUG */ fprintf(filec, "// block \n"); }
| aff PV                      { /* FOR DEBUG */ fprintf(filec, "// aff \n"); }
| ret PV                      { /* FOR DEBUG */ fprintf(filec, "// ret \n"); }
| cond                        { /* FOR DEBUG */ fprintf(filec, "// cond \n"); }
| loop                        { /* FOR DEBUG */ fprintf(filec, "// loop \n"); }
| app PV                      { /* FOR DEBUG */ fprintf(filec, "// appl \n"); }
;

// II.1 Affectations

aff : ID EQ exp               { attribute x = get_symbol_value($1->name);
                                if (!type_compatible(x,$3))
                                    fprintf(filec, "%s = (%s)r%d;\n",x->name,print_type(x->type_val),$3->reg_num);
                                else 
                                    fprintf(filec, "%s = r%d;\n",x->name,$3->reg_num);
                                fprintf(filec,"printf(\"%s = %s\\n\",%s);\n",x->name,(x->type_val==FLOAT)?"%f":"%d", x->name);
                              }
| STAR ID EQ exp             {  attribute x = get_symbol_value($2->name);
                                attribute y = copy_attribute(x);
                                y->num_star --;
                                x->reg_num = new_register(x);
                                fprintf(filec, "r%d = %s;\n",x->reg_num,x->name);
                                if (!type_compatible(y,$4))
                                    fprintf(filec, "*r%d = (%s)r%d;\n",x->reg_num,print_type(x->type_val),$4->reg_num);
                                else 
                                    fprintf(filec, "*r%d = r%d;\n",x->reg_num,$4->reg_num);
                                fprintf(filec,"printf(\"*%s = %s\\n\",*%s);\n",x->name,(x->type_val==FLOAT)?"%f":"%d", $2->name);
                              }
/* | STAR exp EQ exp */  // on peut pas declarer des tableaux donc *(a+1)=2 n'est pas supporte
;


// II.2 Return
ret : RETURN exp              { fprintf(filec,"retReg=pile[--pile_i].addr; //depiler\n");
                                fprintf(filec,"pile[pile_i++].%s_%s=r%d; //enpiler\n",
                                              print_type($2->type_val),
                                              ($2->num_star > 0)?"p":"val",
                                              $2->reg_num);
                                fprintf(filec,"goto *retReg;\n");
                              }

| RETURN PO PF                { ; } // ERROR ??? RETURN PO exp PF
;

// II.3. Conditionelles
cond :
if bool_cond inst else inst   { fprintf(filec,"label%d:\n",$4); } //inst <=> stat
|  if bool_cond inst          { fprintf(filec,"label%d:\n",$2); }
;

bool_cond : PO exp PF         { int x = new_label();
                                fprintf(filec,"if (!r%d) goto label%d;\n",$2->reg_num,x);
                                $$ = x; }
;

if : IF                       {}
;

else : ELSE                   { int x = new_label();
                                fprintf(filec,"goto label%d;\nlabel%d:\n",x,$<num>-1);
                                $$ = x; }
;

// II.4. Iterations

loop : while while_cond inst  { fprintf(filec,"goto label%d;\nlabel%d:\n",$1,$2); }
;

while_cond : PO exp PF        { int x = new_label();
                                fprintf(filec,"if (!r%d) goto label%d;\n",$2->reg_num,x);
                                $$=x; }

while : WHILE                 { int x = new_label();
                                fprintf(filec,"label%d:\n",x);
                                $$=x; }
;


// II.3 Expressions
exp
// II.3.0 Exp. arithmetiques
: MOINS exp %prec UNA         { attribute x = new_attribute();
                                x->type_val = $2->type_val;
                                x->reg_num = new_register(x);
                                fprintf(filec,"r%d = - r%d;\n",x->reg_num,$2->reg_num);
                                $$ = x; }
| exp PLUS exp                { attribute x = eval_exp($1,"+",$3,0);
                                $$ = x; }
| exp MOINS exp               { attribute x = eval_exp($1,"-",$3,0);
                                $$ = x; }
| exp STAR exp                { attribute x = eval_exp($1,"*",$3,0);
                                $$ = x; }
| exp DIV exp                 { attribute x = eval_exp($1,"/",$3,0);
                                $$ = x;}
| PO exp PF                   { $$ = $2; }
| ID                          { attribute x = get_symbol_value($1->name);
                                if (!in_block(x)) print_error("not declared (not in scope)\n");
                                x->reg_num = new_register(x);
                                fprintf(filec,"r%d = %s;\n",x->reg_num,x->name);
                                $$ = x; }
| NUMI                        { $1->reg_num = new_register($1); fprintf(filec,"r%d = %s;\n",$1->reg_num,$1->name); $$ = $1; }
| NUMF                        { $1->reg_num = new_register($1); fprintf(filec,"r%d = %s;\n",$1->reg_num,$1->name); $$ = $1; }

// II.3.1 Déréférencement

| STAR exp %prec UNA          { attribute x = copy_attribute($2);
                                x->num_star--;
                                x->reg_num = new_register(x);
                                fprintf(filec,"r%d = *r%d;\n",x->reg_num,$2->reg_num);
                                $$ = x;
                              }

// II.3.2. Booléens

| NOT exp %prec UNA           {}
| exp INF exp                 { attribute x = eval_exp($1,"<",$3,1);
                                $$ = x; }
| exp SUP exp                 { attribute x = eval_exp($1,">",$3,1);
                                $$ = x; } 
| exp EQUAL exp               { attribute x = eval_exp($1,"==",$3,1);
                                $$ = x; } 
| exp DIFF exp                { attribute x = eval_exp($1,"!=",$3,1);
                                $$ = x; } 
| exp AND exp                 { attribute x = eval_exp($1,"&&",$3,1);
                                $$ = x; } 
| exp OR exp                  { attribute x = eval_exp($1,"||",$3,1);
                                $$ = x; } 

// II.3.3. Structures

| exp ARR ID                  {}
| exp DOT ID                  {}

| app                         { /* FOR DEBUG */ fprintf(filec, "// appl \n"); }
;

// II.4 Applications de fonctions

app : ID pre_args args PF      { attribute x =  get_symbol_value($1->name);
                                if (x->type_val != FUNC) print_error("not func");
                                fprintf(filec,"goto label%d;\n", x->num_label);
                                fprintf(filec,"label%d:\n", $2);
                                if (x->type_ret != VOD) {
                                  attribute r = new_attribute();
                                  r->type_val = x->type_ret;
                                  r->reg_num = new_register(r);
                                  fprintf(filec,"r%d=pile[--pile_i].%s_%s; //depiler\n",
                                                r->reg_num, print_type(r->type_val),
                                                (r->num_star > 0)?"p":"val");
                                  $$ = r;
                                }
                                else {
                                  $$ = NULL;
                                }
                              }
;

pre_args : PO                 { int l = new_label();
                                fprintf(filec,"retReg = &&label%d;\n", l);
                                fprintf(filec,"pile[pile_i++].addr=retReg; //enpiler\n");
                                $$ = l;
                              }

args :  arglist               { ; }
|                             { ; }
;

arglist : exp VIR arglist     { fprintf(filec,"pile[pile_i++].%s_%s=r%d; //enpiler\n",
                                              print_type($1->type_val),
                                              ($1->num_star > 0)?"p":"val",
                                              $1->reg_num);
                              }
| exp                         { fprintf(filec,"pile[pile_i++].%s_%s=r%d; //enpiler\n",
                                              print_type($1->type_val),
                                              ($1->num_star > 0)?"p":"val",
                                              $1->reg_num);
                              }
;



%%



//int main () { printf ("? "); return yyparse ();}
int main (int argc, char* argv[]) {

  filec = fopen (argv[2], "w");
  fileh = fopen (argv[1], "w");

  fprintf(fileh, "#ifndef FILE_H\n");
  fprintf(fileh, "#define FILE_H\n");
  fprintf(fileh, "#include <stdio.h>\n");
  fprintf(fileh, "#include <stdlib.h>\n");
  fprintf(fileh, "#include <string.h>\n");
  fprintf(fileh, "union {\nint  int_val;\nfloat float_val;\n"
                  "void* addr;"
                  "} pile[255];\n");
  fprintf(fileh, "int pile_i = 0;\n");
  fprintf(fileh, "void* retReg;\n");

  fprintf(filec, "#include \"../%s\"\n",argv[1]);
  fprintf(filec, "int main() {\n");

  yyparse ();

  fprintf(fileh, "#endif\n");
  fprintf(filec, "return 0; }\n");

  return 0;

}