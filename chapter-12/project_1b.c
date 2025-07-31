#include <stdio.h>
#define MAX_LENGTH 100
int main(){

  char message[MAX_LENGTH];
  char ch;
  char *p = &message[0];

  printf("Enter a message: ");
    while ((ch = getchar()) != '\n'){
      *p++ = ch;
    }
  
  *p++ = '\0';

  printf("Reversal is: ");
  while (p > &message[0]){
    printf("%c", *--p);
  }
  printf("\n");


  return 0;

}