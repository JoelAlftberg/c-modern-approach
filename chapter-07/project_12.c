#include <stdio.h>

int main(){

  char ch;
  float result = 0.0, current_number;
  printf("Enter an expression: ");
  scanf("%f", &current_number); // Read the initial current_number
  
  while( (ch = getchar()) != '\n'){

    switch(ch){

      case '+':{
        scanf("%f", &current_number);
        result += current_number;
        break;
      }
      case '-':{
        scanf("%f", &current_number);
        result -= current_number;
        break;
      }
      case '*':{
        scanf("%f", &current_number);
        result *= current_number;
        break;
      }
      case '/':{
        scanf("%f", &current_number);
        result /= current_number;
        break;
      }
      default:
        break;
    }

    

  }

  printf("Value of expression: %.2f\n", result);

  return 0;

}