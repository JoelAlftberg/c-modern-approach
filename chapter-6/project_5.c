#include <stdio.h>

int main(){

  int input;

  printf("Enter an integer: ");
  scanf("%d", &input);
  printf("The integer reversed: ");
  do{
    printf("%d", input % 10);
    input /= 10;
  } while (input > 0);
  printf("\n");
  return 0;

}