#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stack.h"

#define PUBLIC /* empty */
#define PRIVATE static

#define MAX_SIZE 100

struct stack_t {
  int top;
  int values[MAX_SIZE];
};

PRIVATE void stack_overflow(void){
  printf("Stack overflow, terminating.\n");
  exit(EXIT_FAILURE);
}

PRIVATE void stack_underflow(void){
  printf("Stack underflow, terminating.\n");
  exit(EXIT_FAILURE);
}

PUBLIC void stack_push(Stack s, Item i){

  if (!(stack_is_full(s))){
    s->values[s->top] = i;
    s->top++;
  }
  else{
    stack_overflow();
  }

}

PUBLIC Item stack_pop(Stack s){

  if (!stack_is_empty(s)){
    s->top--;
    return s->values[s->top];
  }
  else{
    stack_underflow();
  }

}

PUBLIC Item stack_peek(Stack s){
  if (!stack_is_empty(s)){
    return s->values[(s->top) - 1]
  }
  else{
    return 0;
  }
}

PUBLIC bool stack_is_empty(Stack s){
  return s->top == 0;
}

PUBLIC bool stack_is_full(Stack s){
  return s->top == MAX_SIZE;
}
