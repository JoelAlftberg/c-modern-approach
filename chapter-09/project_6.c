#include <stdio.h>

int power(int base, int exponent);

int main(){

  int x, result;

  printf("Enter a value for x: ");
  scanf("%d", &x);
  result = 3 * power(x, 5) + 2 * power(x, 4) - 5 * power(x, 3) - power(x, 2) + 7 * x - 6;
  printf("Result for 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 where x = %d: %d", x, result);

  return 0;

}

int power(int base, int exponent){
  if (exponent == 0)
    return 1;
  exponent--;
  return base * power(base, exponent);
}