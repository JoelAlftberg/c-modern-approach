#include <stdio.h>

float tax(float);

int main(){

  float income;

  printf("Enter your taxable income (usd): ");
  scanf("%f", &income);

  printf("Your tax due is $ %.2f\n", tax(income));

  return 0;

}

float tax(float income){
  
  float due;

  if (income < 750){
    due = income * 0.01f;
  }
  else if (income <= 2250) {
    due = 7.50f + (income - 750) * 0.02f;
  }
  else if (income <= 3750){
    due = 37.50f + (income - 2250) * 0.03;
  }
  else if (income <= 5250){
    due = 82.50f + (income - 3750) * 0.04f;
  }
  else if (income <= 7000){
    due = 142.50f + (income - 5250) * 0.05f;
  }
  else {
    due = 230.50f + (income - 7000) * 0.06f;
  }

  return due;
}