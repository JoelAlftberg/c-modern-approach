#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100

int main(){

  char message[MAX_LENGTH];
  char ch;
  char *p = message, *q = message;

  
  printf("Enter a message: ");
  while ((ch = getchar()) != '\n'){
    if(isalpha(ch))
      *p++ = ch;
  }
  
  q = message;

  while(q <= p) {
    if (*q++ != *--p){
      printf("Not a palindrome");
      return 0;
    }
  }

  printf("Palindrome");
  return 0;

}