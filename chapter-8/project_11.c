#include <stdio.h>


/* 
  'A' = 65 and '2' = 50 in ASCII
  all letters are in groups of 3 starting from the '2' key on the keypad, ex. 4=GHI 
*/

int main(){

  char ch, number[15] = {0};
  int letter, i = 0;

  printf("Enter phone number: ");

  while ((ch = getchar()) != '\n'){
    
    if (ch > 64 && ch < 90){
      letter = ( ch - 65) / 3 + 50; /* ex. ch = 71 (ASCII: G), (71 - 65) / 3 + 50 = 52, 52 = '4' in ASCII */
      number[i++] = letter;
    }
    else {
      number[i++] = ch;
    }

  }
  printf("In numeric form: ");

  for(i = 0; i < 15; i++){
    printf("%c", number[i]);
  }

  printf("\n");

  return 0;

}