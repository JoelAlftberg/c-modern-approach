#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(){

  int dollar_amount;
  int bills_20, bills_10, bills_5, bills_1;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);
  pay_amount(dollar_amount, &bills_20, &bills_10, &bills_5, &bills_1);

  printf("$20 bills: %d\n", bills_20);
  printf("$10 bills: %d\n", bills_10 );
  printf("$5 bills: %d\n", bills_5);
  printf("$1 bills: %d\n", bills_1);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){

    *twenties = dollars / 20;
    dollars %=  20;
    *tens = dollars / 10;
    dollars %= 10;
    *fives = dollars / 5;
    *ones = dollars % 5;

}
