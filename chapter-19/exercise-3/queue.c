#include <stdio.h>
#include "queue.h"

#define PUBLIC /* defaults to auto */
#define PRIVATE static

#define MAX_QUEUE_LENGTH

struct queue_t {
  int head, tail, length;
  Item position[MAX_QUEUE_LENGTH];
};

void queue_append(Queue q, Item i){
  if (q->length < MAX_QUEUE_LENGTH){

    position[q->tail] = i;
    q->tail = (q->tail + 1 == MAX_QUEUE_LENGTH) ? 0 : q->tail++;
    q->length++;

  }
  else{
    queue_overflow(q);
  }

}

void queue_remove_head(Queue q){
  if (!(queue_is_empty(q))){
    q->head++;
    q->length--;
  }
  else{
    queue_underflow(q);
  }
}

Item queue_get_head(Queue q){
  if (!(queue_is_empty(q))){
    return q->position[q->head];
  }
  else{
    queue_underflow(q);
  }
}

ITEM queue_get_tail(Queue q){
  if (!(queue_is_empty(q))){
    return q->position[q->tail];
  }
  else{
    queue_underflow(q);
  }
}