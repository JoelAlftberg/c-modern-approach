#include <stdio.h>

int main(){

  int i, j;

  printf("Enter a number: ");
  scanf("%d", &i);
  
  if ( i <= 9 && i >= -9){
    j = 1;
  }
  else if (i <= 99 && i >= -99){
    j = 2;
  }
  else if (i <= 999 && i >= -999){
    j = 3;
  }
  else if (i <= 9999 && i >= -9999){
    j = 4;
  }
  else{
    printf("Please enter a number wiht four digits!\n");
    return 1;
  }

  printf("The number %d has %d digits\n", i, j);

  return 0;

}