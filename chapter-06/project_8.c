#include <stdio.h>

int main(){

  int number_of_days, starting_day;
  printf("Enter number of days in month: ");
  scanf("%d", &number_of_days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &starting_day);

  for(int i = 1; i < starting_day; i++){
    printf("   ");
  }
  
  for(int i = 1; i <= number_of_days; i++){
    printf("%3d", i);

    if ( (i + starting_day - 1) % 7){
      continue;
    }
    else {
      printf("\n");
    }
  }
  
  printf("\n");
  

  return 0;

}