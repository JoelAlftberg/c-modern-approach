#include <stdio.h>

int main(){

  float input, largest = 0.0f;

  while (input != 0){

    printf("Enter a number: ");
    scanf("%f", &input);

    if (input > largest){
      largest = input;
    }

  }

  printf("\nThe largest number entered was: %.2f\n", largest);
  
  return 0;

}