#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stack.h"

#define PUBLIC /* empty */
#define PRIVATE static

#define MAX_SIZE 100

struct node_t{
  Item value;
  struct node_t *next;
};

struct stack_t {
  struct node_t *top;
};

PRIVATE void stack_underflow(void){
  printf("Stack underflow, terminating.\n");
  exit(EXIT_FAILURE);
}

PUBLIC Stack stack_create(void){

  Stack s = malloc(sizeof(struct stack_t))

  if (s != NULL){
    s->top = NULL;
  }

  return s;

}

PUBLIC void stack_destroy(Stack s){

  free(s);

}

PUBLIC void stack_push(Stack s, Item i){

  struct node_t *new_node;

  new_node = malloc(size_of(struct node_t));

  if (new_node != NULL){ /* if we could allocate memory for the new node*/

    new_node->value = i;
    new_node->next = s->top;
    s->top = new_node;

  }

}

PUBLIC Item stack_pop(Stack s){

  if (!stack_is_empty(s)){
    
    struct node_t *old_top = s->top;

    Item value = old_top->value;
    s->top = s->top->next;

    free(old_top);

    return value;

  }
  else{
    stack_underflow();
  }

}

PUBLIC Item stack_peek(Stack s){
  if (!stack_is_empty(s)){
    return s->top->value;
  }
}

PUBLIC bool stack_is_empty(Stack s){
  return s->top == NULL;
}
