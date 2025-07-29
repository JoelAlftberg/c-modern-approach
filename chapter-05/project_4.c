#include <stdio.h>

int main(){

  int wind_speed_knots;

  printf("Enter the current wind speed (knots): ");
  scanf("%d", &wind_speed_knots);
  
  if (wind_speed_knots < 1){
    printf("The wind is calm right now\n");
  }
  else if (wind_speed_knots <= 3){
    printf("There's some light air outside\n");
  }
  else if (wind_speed_knots <= 27){
    printf("There's a breeze outside\n");
  }
  else if (wind_speed_knots <= 47){
    printf("There's a gale outside\n");
  }
  else if (wind_speed_knots <= 63){
    printf("It's a storm outside!\n");
  }
  else {
    printf("It's a hurricane outside!!!\n");
  }

  return 0;

}