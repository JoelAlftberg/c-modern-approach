#include <stdio.h>

int main(){

  float income, tax;

  printf("Enter your taxable income (usd): ");
  scanf("%f", &income);

  if (income < 750){
    tax = income * 0.01f;
  }
  else if (income <= 2250) {
    tax = 7.50f + (income - 750) * 0.02f;
  }
  else if (income <= 3750){
    tax = 37.50f + (income - 2250) * 0.03;
  }
  else if (income <= 5250){
    tax = 82.50f + (income - 3750) * 0.04f;
  }
  else if (income <= 7000){
    tax = 142.50f + (income - 5250) * 0.05f;
  }
  else {
    tax = 230.50f + (income - 7000) * 0.06f;
  }

  printf("Your tax due is $ %.2f\n", tax);

  return 0;

}