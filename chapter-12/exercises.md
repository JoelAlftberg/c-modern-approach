1)
  >a) 14\
  b) 34\
  c) 4\
  d) true\
  e) false\

2) 
>pointers can't be added, it will give a compiler error
but if we subtract pointers we will get the "distance" between them ex.
  int* high = &a[5];
  int* low = &a[0];
  low: 0x7ffdc06abb50, high: 0x7ffdc06abb64, high - low: 5
the distance is 5 elements between a[5] and a[0]
so correct would be `middle = low + (high - low) / 2;`
3)
>So we have pointers p and q pointing to the first and last elements of the integer array a respectively.
We derefence p and q and make the value swap places, storing *p in the integer temp.
Since we increment p and decrement q we will meet halfway through the array. This means the first 5 values are swapped with the last 5, giving us the result `a[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
4)
```
void make_empty(void){
  top_ptr = &contents[0];
}

bool is_empty(void){
  return top_ptr == &contents[0];
}

bool is_full(void){ 
  return top_ptr == &contents[STACK_SIZE];
}
```
5)
>a) illegal since we are matching int * with int for example\
b)legal since we are matching pointer with pointer\
c)legal since we are dereferencing p to mean a[0]\
d) legal since it will be like p[0] is the same as a[0]
6)
```
int sum_array(int a[], int n){
  int *p,;
  int sum = 0;

  for (p = a; p < a + n; p++){
    sum += *p;
  }
  return sum;
}
```
7)
```
bool search(const int a[], int n, int key){
  int *p;

  for (p = a; p < a + n; p++){
    if (*p == key)
      return true;
  }
  return false;
}
```
8)
```
int store_zeroes(int a[], int n){
  int *p;

  for (p = a; p < a + n; p++){
    *p = 0;
  }
}
```
9)
```
double inner_product(const double *a, const double *b, int n){
  int *p, *q;
  double sum = 0;

  p = a;
  q = b;
  while (p < a + n){
    sum += (*p++) * (*q++);
  }
  return sum;
}
```
10)
>a == &a[0]
```
int *find_middle(int a[], int n){
  return a + n / 2 
}
```
11)
```
int find_largest(const int a[], int n){
  int *p;
  int largest = *p++;

  for (p = a; p < a + n; p++){
    if (*p > largest){
      largest = *p;
    }
  }

  return largest;
}
```
12)
```
void find_two_targets(const int a[], int n, int *largest, int *second_largest){
  *largest = 0;
  *second_largest = 0;

  int *p = a;

  while (p++ < a + n){
    if (*p > *largest){
      *second_largest = *largest;
      *largest = *p 
    }
    else if (*p > second_largest && *p != *largest){
      *second_largest = *p;
    }
  }

}
```