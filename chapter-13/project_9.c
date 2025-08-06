#include <stdio.h>
#include <ctype.h>


int compute_vowel_count(const char *word);

int main(){

  char word[100], ch;
  char *p = word;

  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n'){
    *p++ = ch;
  }
  
  printf("Your sentence contains %d vowels.\n", compute_vowel_count(word));

  return 0;

}

int compute_vowel_count(const char *word){

  int vowels = 0;
  while(*word != '\0'){
    switch(toupper(*word++)){
      case 'A': case 'E': case 'I': case 'O': case 'U':
        vowels++;
        break;
      default:
        break;
    }
  }
  return vowels;

}