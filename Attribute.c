#include "Attribute.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int next_reg_num = 1;

attribute new_attribute () {
  attribute r;
  r  = malloc (sizeof (struct ATTRIBUTE));
  return r;
};


attribute plus_attribute(attribute x, attribute y) {
  attribute r = new_attribute();
  /* unconditionally adding integer values */
  r -> int_val = x -> int_val + y -> int_val;
  return r;
};

attribute mult_attribute(attribute x, attribute y){
  attribute r = new_attribute();
  /* unconditionally adding integer values */
  r -> int_val = x -> int_val * y -> int_val;
  return r;
};

attribute minus_attribute(attribute x, attribute y){
  attribute r = new_attribute();
  /* unconditionally adding integer values */
  r -> int_val = x -> int_val - y -> int_val;
  return r;
};

attribute div_attribute(attribute x, attribute y){
  attribute r = new_attribute();
  /* unconditionally adding integer values */
  r -> int_val = x -> int_val % y -> int_val;
  return r;
};

attribute neg_attribute(attribute x){
  attribute r = new_attribute();
  /* unconditionally adding integer values */
  r -> int_val = -(x -> int_val);
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

int new_register(type t) {
    fprintf(stdout,"%s r%d;\n",print_type(t),next_reg_num);
    return next_reg_num++;
};

char* str_concat(char* a, char* b) {
    char* r = malloc(strlen(a)+strlen(b)+2);
    strcpy(r,"");
    strcat(r,a);
    strcat(r,b);
    return r;
};


