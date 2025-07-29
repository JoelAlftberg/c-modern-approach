#include <stdio.h>

int main(){

  int input;

  printf("Enter an integer: ");
  scanf("%d", &input);

  for(int i = 1; i * i <= input; i++){

    if (i % 2){
      continue;
    }
    else {
      printf("%d\n", i * i);
    } 
    
  }

  return 0;

}