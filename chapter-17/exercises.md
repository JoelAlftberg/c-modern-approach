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