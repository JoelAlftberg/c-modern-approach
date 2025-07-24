#include <stdio.h>

int main(){

  char ch, final_ch;
  char sentence[100] = {0}, reversed_sentence[100] = {0}, temp_word[100] = {0};
  

  int i, j = 0, k, word_length;

  printf("Enter a sentence: ");
  while ( (ch = getchar()) != '\n' ){
  
    if (ch == '.' || ch == '?' || ch == '!'){
      final_ch = ch;
      break;
    }
    else {
      sentence[i++] = ch; 
    }

  }
  printf("length of sentence is %d\n", i);

  for(;i >= -1; i--){
    // when the character read from the sentence is not a space, add it to a temporary array
    if (sentence[i] != ' ' && i != -1){ 
      temp_word[word_length++] = sentence[i];
    }
    else{

      // types out the temp word backwards
      printf("Temp word is: ");
      for(k = word_length; k >= 0; k--){
        printf("%c", temp_word[k]);
      }
      printf("\n");

      // take the temporary array and iterate backwards through it and add the characters to the reversed sentence
      for(;word_length >= 0; word_length--){
        reversed_sentence[j++] = temp_word[word_length];
      }
      
      // add a space after each word as long as it's not the final word
      if (i != -1){
        reversed_sentence[j++] = ' ';
      }
      
      // clear the temp word
      for(k = 0; k < 100; k++){
        temp_word[k] = 0;
      }

      word_length = 0;

    }
    printf("Position %d had character %c\n", i, sentence[i]);
  }


  printf("\n");

  printf("Reversal of sentence: ");
  for(i = 0; i < 100; i++){
    printf("%c", reversed_sentence[i]);
  }
  printf("%c", final_ch);

  printf("\n");

  return 0;

}