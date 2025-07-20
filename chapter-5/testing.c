#include <stdio.h>

int main(){

  int i, j;
  int teenager;

  printf("Input two single-digit numbers (i j): ");
  scanf("%d %d", &i ,&j);
  teenager = i >= 13 && i <= 19;
  printf("%d\n", teenager);
  return 0;

}