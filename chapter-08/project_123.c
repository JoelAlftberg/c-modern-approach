#include <stdio.h>

int main(){

  int digit, flag = 1;
  long n, input;

  while (flag){
    int digit_occurrences[10] = {0};

    printf("Enter a number: ");
    scanf("%ld", &input);

    if (input <= 0){
      flag = 0;
      return 0;
    }

    n = input;
    
    while (n > 0){
      digit = n % 10;
      digit_occurrences[digit]++;
      n /= 10;
    }

    printf("Digit:\t\t");
    for(int i = 0; i < 10; i++){
      printf("%3d", i);
    }

    printf("\nOccurences:\t");
    for(int i = 0; i < 10; i++){
      printf("%3d", digit_occurrences[i]);
    }
    printf("\n");

  }

  return 0;

}