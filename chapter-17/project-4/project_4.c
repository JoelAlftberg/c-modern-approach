/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* line.c (Chapter 15, page 364) */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node{
  struct node *next_word;
  char word[];
} *line = NULL;

int line_len = 0;
int num_words = 0;

void clear_line(void)
{
  // maybe set head to start again?
}

void add_word(const char *word)
{
  // allocate memory for the node containing the new word, size of the node is the struct + length of the word + 1byte
  struct node *new_word = malloc(sizeof(struct node) + strlen(word + 1));

  struct node **pp = &li;

  strcpy(new_word->word, word);
  new_word->next_word = NULL;

  /** while the next pointer in the node that the pointer that pp is pointing to is not NULL 
      (i.e. we have not hit the last node in the list ), then make pp point to the pointer that 
      points to the next_word pointer in the next node**/

  while(*pp != NULL){
    pp = &(*pp)->next_word;
  }

  //Insert the new_word node at the node that the next_word pointer is pointing to in the last node we checked
  *pp = new_word;

  line_len += strlen(word);
  if (num_words > 0)
      line_len++;
  num_words++;

}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  int extra_spaces, spaces_to_insert, i, j;
  struct node *first_word = line;

  extra_spaces = MAX_LINE_LEN - line_len;
  for (i = 0; i < line_len; i++) {
    if (line[i] != ' ')
      putchar(line[i]);
    else {
      spaces_to_insert = extra_spaces / (num_words - 1);
      for (j = 1; j <= spaces_to_insert + 1; j++)
        putchar(' ');
      extra_spaces -= spaces_to_insert;
      num_words--;
    }
  }
  putchar('\n');
}

void flush_line(void)
{
  if (line_len > 0)
  
    puts(line);
}