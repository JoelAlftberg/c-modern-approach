#include <stdio.h>

int main(){

  int i, j, k;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &i, &j, &k);
  printf("The reversal is %1d%1d%1d", k, j, i);

  return 0;

}