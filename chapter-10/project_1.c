#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_overflow();
void stack_underflow();

int main(){

  char ch;

  printf("Enter parentheses and/or braces: ");
  while ((ch = getchar()) != '\n'){

    if (ch == ')' && pop() != '('){
      printf("parentheses/braces improprely nested");
      return 0;
    }
    else if (ch == ']' && pop() != '['){
      printf("parentheses/braces improprely nested");
      return 0;
    }
    else if (ch == '}' && pop() != '{'){
      printf("parentheses/braces improprely nested");
      return 0;
    }
    else if (ch == '(' || ch == '[' || ch == '{') {
      push(ch);
    }
  }

  if (!is_empty()){
    printf("parentheses/braces improprely nested");
    return 0;
  }
  
  printf("Parentheses/braces are nested properly\n");
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
    contents[top++] = c;
  }
}

char pop(void){
  if (is_empty()){
    stack_underflow();
  }
  else{
    return contents[--top];
  }
}

void stack_overflow(){
  printf("Stack overflow\n");
  exit (EXIT_FAILURE);
}

void stack_underflow(){
  printf("Stack underflow\n");
  exit (EXIT_FAILURE);
}