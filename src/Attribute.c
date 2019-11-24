#include "Attribute.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern FILE * fileh;
extern FILE * filec;

attribute new_attribute() {
  attribute r;
  r  = malloc (sizeof(struct ATTRIBUTE));
  r->num_ref = 0;
  return r;
};

attribute copy_attribute(attribute x) {
  attribute r;
  r  = malloc (sizeof(struct ATTRIBUTE));
  memcpy(r,x,sizeof(struct ATTRIBUTE));
  return r;
}

char* str_concat(char* a, char* b) {
    char* r = malloc(strlen(a)+strlen(b)+2);
    strcpy(r,"");
    strcat(r,a);
    strcat(r,b);
    return r;
};

char* print_type(type t) {
    switch (t) {
        case VOD: return "void"; break;
        case INT: return "int"; break;
        case FLOAT: return "float"; break;
        case STRCT: return "struct"; break;
        default: return "void"; break;
    }
};

void print_error(char* ch) {
    fprintf(stderr,"ERROR: %s\n",ch);
    exit(-1);
};

int type_compatible(attribute x1, attribute x2){
  return x1->type_val == x2->type_val;
};
attribute eval_exp(attribute x1, char * op,attribute x2)
{ 
  if(type_compatible(x1,x2))
    {
      attribute x=new_attribute();
      x->type_val = x1->type_val;
      x->reg_num = new_register(x);
      fprintf(filec,"r%d = r%d %s r%d;\n",x->reg_num,x1->reg_num,op,x2->reg_num);
      return x;
    }
    else
    {
      attribute x=new_attribute();
      x->type_val = FLOAT;
      x->reg_num = new_register(x);
      fprintf(filec,"r%d = ",x->reg_num);
      if(x1->type_val == FLOAT)
        fprintf(filec,"r%d %s (float)r%d;\n",x1->reg_num,op,x2->reg_num);
      else 
        fprintf(filec,"(float)r%d %s r%d;\n",x1->reg_num,op,x2->reg_num);
      return x;
    }

}

char* print_star(int n) {
  if (n <= 0) return "";
  return str_concat("*",print_star(n-1));
}

int next_reg_num = 1;
int new_register(attribute x) {
    fprintf(fileh,"%s %sr%d;\n",print_type(x->type_val),print_star(x->num_star),next_reg_num);
    return next_reg_num++;
};

int next_label = 1;
int new_label() {
    return next_label++;
};

//// BLOCK

int next_block = 2;
int queue_block[MAX_BLOCKS] = {1,0};
int queue_block_p = 1;

int enter_block(){
  queue_block[queue_block_p++] = next_block++;
  return curr_block();
};

int exit_block(){
  queue_block_p--;
  return curr_block();
};

int curr_block(){
  return queue_block[queue_block_p-1];
};

int in_block(attribute x) {
  int i;
  for(i = 0; i < queue_block_p; i++) {
      if (x->num_block == queue_block[i])
        return 1;
  }
  return 0;
}
