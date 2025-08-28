#include <stdio.h>
#include "queue.h"

#define PUBLIC /* defaults to auto */
#define PRIVATE static

#define MAX_QUEUE_LENGTH 100

struct queue_t {
  int head, tail, length;
  Item position[MAX_QUEUE_LENGTH];
};

void queue_append(Queue q, Item i){
  if (q->length < MAX_QUEUE_LENGTH){
    q->position[q->tail] = i;
    q->tail = (q->tail + 1) % MAX_QUEUE_LENGTH;
    q->length++;
  }

}

void queue_remove_head(Queue q){
  if (!(queue_is_empty(q))){
    q->head = (q->head + 1) % MAX_QUEUE_LENGTH;
    q->length--;
  }
}

Item queue_get_head(Queue q){
  if (!(queue_is_empty(q))){
    return q->position[q->head];
  }
}

Item queue_get_tail(Queue q){
  if (!(queue_is_empty(q))){
    return q->position[(q->tail + MAX_QUEUE_LENGTH - 1) % MAX_QUEUE_LENGTH];
  }
}