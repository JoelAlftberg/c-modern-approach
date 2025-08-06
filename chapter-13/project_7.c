#include <stdio.h>

int main(){

  int digit1, digit2;

  char *digits[] = {NULL, "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  char *tens[] = {NULL, NULL, "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &digit1, &digit2);
  if(digit1 == 1){
    printf("%s\n", teens[digit2]);
  }
  else{
    printf("%s-%s\n", tens[digit1], digits[digit2]);
  }
  return 0;

}