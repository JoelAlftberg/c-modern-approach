#include <stdio.h>

int main(){

  char ch, final_ch;
  char sentence[100] = {0}, reversed_sentence[100] = {0}, temp_word[100] = {0};
  char *p = sentence;
  char *q;

  printf("Enter a sentence: ");
  while ( (ch = getchar()) != '\n' ){
  
    if (ch == '.' || ch == '?' || ch == '!'){
      final_ch = ch;
      break;
    }
    else {
      *p++ = ch; 
    }

  }


  while(p >= sentence){


    while (*--p != ' ' && p != sentence);

    if (p == sentence){
      q = sentence;
    }
    else{
      q = p + 1; // +1 to make sure q does not point to the space that p hit
    }

    while(*q != ' ' && *q != '\0'){
      putchar(*q++);
    }
    
    // if we are not at the start of the sentence entered, add a space
    if (p >= sentence){
      putchar(' ');
    }

  }

  printf("\b%c\n", final_ch);

  return 0;

}