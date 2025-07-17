#include <stdio.h>

int main(){
    
    int gs1_prefix, group_id, publisher_code, item_num, chk_digit; 

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher_code, &item_num, &chk_digit);
    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", chk_digit);
    
    return 0;
}