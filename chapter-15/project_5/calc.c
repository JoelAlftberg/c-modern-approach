#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"


bool calculation_done;

int main(){
  
  while(true){

    calculation_done = false;
    make_empty();

    printf("Enter an RPN expression: ");
    while(!calculation_done){
      char ch;
      scanf(" %c", &ch);
      int b;
      int a;

      switch(ch){
        case '0':
        case '1': case '2': case '3':
        case '4': case '5': case '6':
        case '7': case '8': case '9':
          push(ch - '0');
          break;
        case '+': 
          b = pop(); // convert to int
          a = pop(); // convert to int
          push(a + b);
          break;
        case '-':
          b = pop(); 
          a = pop(); 
          push(a - b);
          break;
        case '*':
          b = pop(); 
          a = pop(); 
          push(a * b);
          break; 
        case '/':
          b = pop(); 
          a = pop(); 
          push(a / b);
          break;
        case '=':
          printf("Value of expression: %d\n", pop());
          calculation_done = true;
          break;
        default:
          exit(EXIT_SUCCESS);
          break;
      }
    }

  }

  return 0;

}