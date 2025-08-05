#include <stdio.h>
#include <string.h>

int main(){

  char smallest[20] = "", largest[20] = "";
  char ch;
  int first_word = 1;

  while(1){
    char word[20] = {0}, *p = word;
    printf("Enter word: ");

    while((ch = getchar()) != '\n'){
      *p++ = ch;
    }

    if(strlen(word) == 4){
      break;
    }

    if(first_word){
      strcpy(smallest, word);
      strcpy(largest, word);
      first_word = 0;
    }
    else {
      if (strcmp(smallest, word) >= 0){
      strcpy(smallest, word);
      continue;
      }
  
      if(strcmp(largest, word) <= 0){
        strcpy(largest, word);
        continue;
      }
    }

  }

  printf("Smallest word: %s\n", smallest);
  printf("Largest word: %s\n", largest);

  return 0;

}