/*
 *  Attribute.h
 *
 *  Created by Janin on 10/2019
 *  Copyright 2018 LaBRI. All rights reserved.
 *
 *  Module for a clean handling of attibutes values
 *
 */

#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#define MAX_BLOCKS 255

typedef enum {VOD, INT, FLOAT, FUNC, STRCT} type;

struct ATTRIBUTE {
  char* name;
  type type_val;
  int reg_num;
  // pour les blocks:
  int num_block;
  // pour les pointeurs:
  int num_star;
  // pour les fonctions:
  int num_label;
  type type_ret;
  // pour les constants;
  int int_val;
  float float_val;
};

typedef struct ATTRIBUTE * attribute;

attribute new_attribute ();
attribute copy_attribute (attribute);
/* returns the pointeur to a newly allocated (but uninitialized) attribute value structure */

//// UTILS

char* print_type(type t);
char* print_star(int);
void print_error(char* ch);
char* str_concat(char* a, char* b);

//// factorisation de code


int type_compatible(attribute, attribute);
attribute eval_exp(attribute x1, char * op,attribute x2);

//// REGISTER && LABEL

int new_register();
int new_label();

//// BLOCKS

int enter_block();
int exit_block();
int curr_block();
int in_block(attribute);


#endif
