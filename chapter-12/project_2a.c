#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 100

int main(){

  char message[MAX_LENGTH];
  char ch;

  int i = 0;
  
  printf("Enter a message: ");
  while ((ch = getchar()) != '\n'){
    if(isalpha(ch))
      message[i++] = ch;
  }
  
  int length = i;

  for(int j = 0; j < length; j++){
    if (message[--i] != message[j]){
      printf("Not a palindrome");
      return 0;
    }
  }

  printf("Palindrome");
  return 0;

}