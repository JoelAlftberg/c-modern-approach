#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100

int main(){

  int i;

  char message[MAX_SIZE] = {0}, ch;

  printf("Enter message: ");
  while( (ch = getchar()) != '\n'){
      message[i++] = ch;
  }

  printf("In B1FF-speak: ");
  for(i = 0; i < sizeof(message) / sizeof(message[MAX_SIZE]); i++){
    message[i] = toupper(message[i]);
    switch(message[i]){
      case 'A':
        message[i] = '4';
        break;
      case 'B':
        message[i] = '4';
        break;
      case 'E':
        message[i] = '3';
        break;
      case 'I':
        message[i] = '1';
        break;
      case 'O':
        message[i] = '0';
        break;
      case 'S':
        message[i] = '5';
        break;
      default:
        break;
    }

  }

  for(i = 0; i < sizeof(message) / sizeof(message[MAX_SIZE]); i++){
    printf("%c", message[i]);
  }
  printf("!!!!!!!!!!\n");
  

  return 0;

}