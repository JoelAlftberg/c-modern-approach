#include <stdio.h>

int main(){

  int hours, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  if (hours < 12){
    printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);
  }
  else if( hours == 12){
    printf("Equivalent 12-hour time: %d:%.2d PM\n", hours, minutes);
  }
  else if (hours == 0) {
    printf("Equivalent 12-hour time: 12:%.2d\n AM", minutes); 
  }
  else {
    printf("Equivalent 12-hour time: %d:%.2d PM\n", hours % 12, minutes); 
  }

  return 0;
  
}