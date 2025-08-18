1)
```
void *my_malloc(int n){

  void* p;
  if((p = malloc(n * sizeof(char))) != NULL){
    return p;
  }
  else{
    printf("Error: couldn't allocate %d bytes of memory\n", n);
    exit(1);
  }
  
}
```
2)
```
char *duplicate(char *str){
  char *p;
  p = my_malloc(sizeof(str));
  p = str;

  return p;
  
}
```
3)
```
int *create_array(int n, int inital_value){

  int *p, *initializer;
  p = my_malloc(n * sizeof(int));
  
  for(initializer = p; inital_value < p + n; initalizer++){
    *initalizer = inital_value; 
  }

  return p;
}
```
4)
```
p->upper_left = {10, 25};
p->lower_right = {20, 15};
```
5)
>
a) should have been p->d.b instead
b) legal\
c) legal\
d) should have been p->d.c instead

6)
```
void delete_from_list(struct node **list, int n){
  
  struct node *current = *list;

  while(current){
    if(current->value == n){
      *list = current->next;
      free(current);
      return;
    }

    list = &current->next;
    current = current->next;

  }
  
}
```

7)
>The loop will clear up first node and p will be a dangling pointer so p->next won't mean anything and will cause undefined behaviour
```
p = head;
while (p){

  void *q = p;
  p = p->next;
  free(q);

}
```
8)
```
struct node{
  struct node *next;
};

struct node *top = NULL;


void make_empty(void){
  struct node *p = top;

  while (p){
    void *q = p;
    p = p->next;
    free(q);
  }
}

bool is_empty(void){
  return top == NULL;
}

void push(struct node *new_node){

  new_node = malloc(sizeof(struct node));
  if (!new_node){
    return false;
  }
  new_node->next = top;
  top = new_node;

  return true;

}

void *pop(void){

  struct node *temp_top = top;

  temp_top = top;
  top = top->next;

  free(temp_top);

}
```
9)
>True\
If we have the pointer *p be equal to &x then the expression would instead be (*p)->a which would be legal\
Another way is to expand -> to the dereference operator *, then we would have the expression *(&x).a which equals x.a
10)
```
void print_part(struct part *p){
  printf("Part number: %d\n", p->number);
  printf("Part name: %s\n", p->name);
  printf("Quantity on hand: %d\n", p->on_hand);
}
```
11)
```
int count_occurences(struct node *list, int n){

  int count = 0;

  while(list != NULL){
    if(list->value == n){
      count++;
    }
    list = list->next;
  }
  
  return count;
  
}
```
12)
```
struct node *find_last(struct node *list, int n){

  struct node *p = list;

  while(p != NULL){
    if (p->value == n){
      return p;
    }
    p = p->next;
  }

  return NULL;

}
```
13)
```
struct node *insert_into_ordered_list(struct node *list, struct node *new_node){

  struct node **pp = &list;

  while(list){

    if(list->value >= new_node->value){
      break;
    }
    pp = &list->next;
    list = list->next;
  }

  new_node->next = list;
  *pp = new_node;
  

  return list;

}
```
14)
```
void delete_from_list(struct node **list, int n){
  
  struct node *current = *list;

  while(current){
    if(current->value == n){
      *list = current->next;
      free(current);
    }

    list = &current->next;
    current = current->next;

  }
  
}
```
15)
>output will be: 3\
what will happen when running the program is:\
**after entering main:** `f1(f2)`\
**f1(f2) call:** `while (f2(0)) n++;`\
**f2 call:** `return 0 * 0 + 0 - 12`\
**loop continues until** `f2(3)` which evaluates to 0 and will make the f1 call return to main
16)
```
int sum (int (*f)(int), int start, int end){

  int functions_sum = 0;

  while(start <= end)){
    functions_sum += (*f)(start);
    start++;
  }

  return functions_sum;

}
```
17)
```
qsort(&array[50], 50, sizeof(array[0]), compare)
```

