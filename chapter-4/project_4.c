#include <stdio.h>

int main(){

  int i, remainder, oct1, oct2, oct3, oct4, oct5;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &i);

  oct1 = i % 8;
  remainder = i / 8;
  oct2 = remainder % 8;
  remainder = remainder / 8;
  oct3 = remainder % 8;
  remainder = remainder / 8;
  oct4 = remainder % 8;
  remainder = remainder /8;
  oct5 = remainder % 8;

  printf("%1d%1d%1d%1d%1d", oct5, oct4, oct3, oct2, oct1);

  return 0;

}