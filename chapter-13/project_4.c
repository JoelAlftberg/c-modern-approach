#include <stdio.h>

/* program should be called reverse.c*/

int main(int argc, char *argv[]){
  
  for (int i = argc - 1; i > 0; i--){
    printf("%s ", argv[i]);
  }

  return 0;

}