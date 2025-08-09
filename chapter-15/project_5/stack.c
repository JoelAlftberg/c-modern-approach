#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

#define STACK_SIZE 100

int top = 0;
char stack[STACK_SIZE];


void make_empty(void){
  top = 0;
}

bool is_empty(void){
  return top == 0;
}

bool is_full(void){
  return top == STACK_SIZE;
}

void push(char c){
  if (is_full()){
    stack_overflow();
  }
  else{
   stack[top++] = c;
  }
}

char pop(void){
  if (is_empty()){
    stack_underflow();
  }
  else{
    return stack[--top];
  }
}

void stack_overflow(){
  printf("Error: Expression is too complex\n");
  
  exit (EXIT_FAILURE);
}

void stack_underflow(){
  printf("Error: Not enough operands in expression\n");
  exit (EXIT_FAILURE);
}