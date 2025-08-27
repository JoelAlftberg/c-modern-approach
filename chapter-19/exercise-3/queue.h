#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_t *Queue;

void queue_append(Queue, Item);
void queue_remove_head(Queue);
Item queue_get_head(Queue);
Item queue_get_tail(Queue);
bool queue_is_empty(Queue);