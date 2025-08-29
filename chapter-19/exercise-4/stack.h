#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef int Item;

typedef struct stack_t *Stack;

Item stack_pop(Stack);
void stack_push(Stack, int);
Item stack_peek(Stack);
bool stack_is_empty(Stack);
bool stack_is_full(Stack);

