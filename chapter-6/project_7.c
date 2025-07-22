#include <stdio.h>

int main(){

  int i, n, odd = 3, square = 1;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++, odd += 2){

    printf("%10d%10d\n", i, square);
    square += odd;
    
  }

  return 0;

}