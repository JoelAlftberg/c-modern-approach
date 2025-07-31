#include <stdio.h>
#include <stdbool.h>
#define LEN 24

int sum_two_dimensional_array(int a[][LEN], int n);

int main(){

  int temperatures[7][24] = {{1},{6},{4},{7},{9},{2},{3}};
//  printf("%p", &temperatures[7][24]);
  int sum_2d = sum_two_dimensional_array(temperatures, 7);
  printf("sum of array is %d", sum_2d);

} 

int sum_two_dimensional_array(int a[][LEN], int n){
  int *p = a[0]; // first element &a[0][0]
  int sum = 0;

  while(p < a[0] + n * LEN){
    sum += *p++;
  }
  return sum;
}
