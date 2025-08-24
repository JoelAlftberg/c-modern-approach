#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_WORDS 50

char *read_line();
int qsort_strcmp(const void *a, const void *b);

int main(){

  // get word from read_line
  // if word is empty
  // break and do sort

  char *words[MAX_WORDS];

  int num_of_words = 0;

  for (num_of_words = 0; num_of_words < MAX_WORDS; num_of_words++){
    printf("Enter word: ");
    char *next_word = read_line();
    if (next_word[0] == '\0'){
      break;
    }
    else{
      words[num_of_words] = next_word;
    }    
  }
  
  qsort(words, num_of_words, sizeof(char*), qsort_strcmp);

  printf("In sorted order: ");
  for (int i = 0; i < num_of_words; i++){
      printf("%s ", words[i]);
  }

  return 0;

}

char *read_line()
{
  
  char ch;
  char *string;
  int i = 0;

  string = malloc(1 * sizeof(char));

  while ((ch = getchar()) == ' ');

  while (ch != '\n' && ch != EOF) {
    if (i < 20){
      string[i] = ch;
      i++;
      string = realloc(string, i * sizeof(char)); //expand memory as we go
    }

    ch = getchar();

  }

  string[i] = '\0';

  return string;

}

int qsort_strcmp(const void *a, const void *b){
  return strcmp(*(char**) a, *(char**) b);
}

