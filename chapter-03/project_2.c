#include <stdio.h>

int main(){

    int item_number, month, day, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d",&item_number);
    
    printf("Enter unit price: ");
    scanf("%f",&unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);


    printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-4d\t\t$%7.2f\t%-2.2d/%-2.2d/%-4.4d", item_number, unit_price, month, day, year); 

    return 0;
}