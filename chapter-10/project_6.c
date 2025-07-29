#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int top = 0;

// changing this to int would let us to results larger than 255...
char stack[STACK_SIZE];
bool calculation_done;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_overflow();
void stack_underflow();

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


void make_empty(void){
  top = 0;
}

bool is_empty(void){
  return top == 0;
}

bool is_full(void){
  return top == STACK_SIZE;
}

void push(char c){
  if (is_full()){
    stack_overflow();
  }
  else{
   stack[top++] = c;
  }
}

char pop(void){
  if (is_empty()){
    stack_underflow();
  }
  else{
    return stack[--top];
  }
}

void stack_overflow(){
  printf("Error: Expression is too complex\n");
  
  exit (EXIT_FAILURE);
}

void stack_underflow(){
  printf("Error: Not enough operands in expression\n");
  exit (EXIT_FAILURE);
}