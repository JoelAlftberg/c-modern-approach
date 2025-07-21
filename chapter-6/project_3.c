#include <stdio.h>

int main(){
  
  int numerator, denominator, i, j, remainder, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);

  i = numerator, j = denominator;
  while (i > 0 && j / i > 0){
    remainder = j % i;
    j = i;
    i = remainder;
  }

  gcd = j;

  printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);

  return 0;

}