#include <stdio.h>
#define MAX_LENGTH 100
int main(){

  char message[MAX_LENGTH];
  char ch;
  int i = 0;

  printf("Enter a message: ");
    while ((ch = getchar()) != '\n'){
      message[i++] = ch;
    }
  
  message[i++] = '\0';

  printf("Reversal is: ");
  while (i > 0){
    printf("%c", message[--i]);
  }
  printf("\n");


  return 0;

}