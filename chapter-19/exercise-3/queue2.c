#include <stdio.h>
#include <stdlib.h>

#include "queue2.h"

#define PUBLIC /* defaults to auto */
#define PRIVATE static

#define MAX_QUEUE_LENGTH 100

struct node_t {
  Item item;
  struct node_t *next;
};

struct queue_t {
  struct node_t *head, *tail;
};

void queue_append(Queue q, Item i){
  struct node_t *new_node;
  new_node = malloc(sizeof(*new_node));

  if(new_node != NULL){

    new_node->item = i;
    new_node->next = NULL;

    if (q->tail != NULL ){
      q->tail->next = new_node;
    }
    else{
      q->head = new_node;
    }
    q->tail = new_node;
  }

}

void queue_remove_head(Queue q){

  if (q->head != NULL){
    struct node_t *old_head = q->head;
    q->head = old_head->next;

    if (q->head == NULL){ //the new head is NULL so we just removed the first node, means the tail is also NULL
      q->tail = NULL;
    }

    free(old_head);
  }
  
}

Item queue_get_head(Queue q){
  return q->head->item;
}

Item queue_get_tail(Queue q){
  return q->tail->item;
}

bool queue_is_empty(Queue q){
  return (q->head == NULL);
}