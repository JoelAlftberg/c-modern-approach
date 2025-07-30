#include <stdio.h>
#include <stdbool.h>

int *find_middle(int a[], int n);

int main(){

  int a[4] = {1, 2, 3, 4};
  int *p = find_middle(a, 4);
  printf("p == a[2] is %d\n", p == &a[2]);
}

int *find_middle(int a[], int n){
  return a + n / 2;
}