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

typedef enum {VOD, INT, FLOAT, STRCT} type;

struct ATTRIBUTE {
  char* name;
  int int_val;
  float float_val;
  type type_val;
  int num_star;
  int num_ref;
  int reg_num;
  int num_block;
  int num_label; // pour les fonctions
};

typedef struct ATTRIBUTE * attribute;

attribute new_attribute ();
attribute copy_attribute (attribute);
/* returns the pointeur to a newly allocated (but uninitialized) attribute value structure */

char* print_type(type t);
void print_error(char* ch);
char* str_concat(char* a, char* b);

int new_register();
int new_label();

char* print_star(int);
int type_compatible(attribute, attribute);
attribute eval_exp(attribute x1, char * op,attribute x2);

int enter_block();
int exit_block();
int curr_block();
int in_block(attribute);


#endif
