#include <stdio.h>
#define MAX_LENGTH 100
int main(){

  char message[MAX_LENGTH];
  char ch;
  char *p = message;

  printf("Enter a message: ");
    while ((ch = getchar()) != '\n'){
      *p++ = ch;
    }

  printf("Reversal is: ");
  while (p > message){
    printf("%c", *--p);
  }
  printf("\n");


  return 0;

}