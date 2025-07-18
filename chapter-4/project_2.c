#include <stdio.h>

int main(){

  int three_digit, digit_1, digit_2, digit_3;

  printf("Enter a three-digit number: ");
  scanf("%d", &three_digit);

  digit_1 = three_digit / 100;        // 687 / 100 = 6
  digit_2 = (three_digit % 100) / 10; // (687 % 100) / 10 = 87 / 10 = 8 
  digit_3 = (three_digit % 100) % 10; // (687 % 100) % 10 = 87 % 10 = 7

  printf("The reversal is: %1d%1d%1d", digit_3, digit_2, digit_1);

  return 0;
  
}

