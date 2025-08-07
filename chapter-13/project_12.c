#include <stdio.h>

int main(){

  char sentence[30][20];
  char ch;

  int word_number = 0, letters = 0;

  printf("Enter a sentence: ");

  while((ch = getchar()) != '\n'){
    
    if(ch == ' '){
      sentence[word_number][letters++] = '\0';
      word_number++;
      letters = 0;
    }
    else{
      sentence[word_number][letters++] = ch;
    }

  }

  sentence[word_number][letters] = '\0';

  printf("Reversal of the sentence: ");
  while (word_number >= 0){

    if (word_number == 0)
      printf("%s\n", sentence[word_number--]);
    else
      printf("%s ", sentence[word_number--]);

  }

  return 0;

}