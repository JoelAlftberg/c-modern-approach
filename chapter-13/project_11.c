#include <stdio.h>
#include <ctype.h>

double compute_average_word_length(const char *sentence);

int main(){

  char string[255];

  printf("Enter a sentence: ");

  fgets(string, 255, stdin);

  printf("Average word length: %2.2f\n", compute_average_word_length(string));

  return 0;

}

double compute_average_word_length(const char *sentence){
  
  float word_count = 0, letters = 0;

  while(*sentence){
    
    if(*sentence == ' ' && isalpha(*(sentence + 1))){
      word_count++;
    }
    else if(word_count == 0 && isalpha(*(sentence))){
      word_count = 1;
    }

    if(isalpha(*sentence)){
      letters++;
    }
    
    sentence++;

  }

  return letters / word_count;
 

}