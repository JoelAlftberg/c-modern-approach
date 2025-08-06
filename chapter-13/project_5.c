#include <stdio.h>
#include <stdlib.h>

/* program should be called sum.c */

int main(int argc, char *argv[]){
  
  int sum = 0;

  for (int i = 1; i < argc; i++){
    sum += atoi(argv[i]);
  }
  
  printf("Sum: %d\n", sum);

  return 0;

}