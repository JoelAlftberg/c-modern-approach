#include <stdio.h>

int main(){

    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %4.4d%2.2d%2.2d", year, month, day);

}