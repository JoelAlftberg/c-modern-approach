#include <stdio.h>

int main(){

  int two_digit, digit_1, digit_2;

  printf("Enter a two-digit number: ");
  scanf("%d", &two_digit);

  digit_1 = two_digit / 10;
  digit_2 = two_digit % 10;

  printf("The reversal is: %1d%1d", digit_2, digit_1);

  return 0;
  
}