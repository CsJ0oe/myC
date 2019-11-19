#include "Attribute.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

attribute new_attribute() {
  attribute r;
  r  = malloc (sizeof(struct ATTRIBUTE));
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

int next_reg_num = 1;
int new_register(type t) {
    fprintf(stdout,"%s r%d;\n",print_type(t),next_reg_num);
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
  for(int i = 0; i < queue_block_p; i++) {
      if (x->num_block == queue_block[i])
        return 1;
  }
  return 0;
}
