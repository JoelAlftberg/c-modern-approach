#include <stdio.h>
#include <ctype.h>

char ch;
int vowels = 0;

int main(){

  printf("Enter a sentence: ");

  while((ch = getchar()) != '\n'){

    switch(toupper(ch)){
      case 'A': case 'E': case 'I': case 'O': case 'U':
        vowels++;
        break;
      default:
        break;
    }

  }
  
  printf("Your sentence contains %d vowels.\n", vowels);

  return 0;

}