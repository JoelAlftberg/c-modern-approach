#include <stdio.h>

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(){
  
  int numerator, denominator, i, j, remainder, gcd;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);
  reduce(numerator, denominator, &numerator, &denominator);
  printf("In lowest terms: %d/%d\n", numerator, denominator);

  return 0;

}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){

  int i = numerator, j = denominator, remainder, gcd;
  while (i > 0 && j / i > 0){
    remainder = j % i;
    j = i;
    i = remainder;
  }

  *reduced_numerator = numerator / j;
  *reduced_denominator = denominator / j;

}