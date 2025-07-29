#include <stdio.h>

void find_two_targets(int a[], int n, int *largest, int *second_largest);

int main(){

  int numbers[5] = {1, 2, 3, 4, 5};
  int highest, second_highest;
  
  find_two_targets(numbers, 5, &highest, &second_highest);
  
  printf("Highest = %d Second Highest = %d\n", highest, second_highest);

  return 0;

}

void find_two_targets(int a[], int n, int *largest, int *second_largest){

  *largest = 0;
  *second_largest = 0;

  for(int i = 0; i < n; i++){
    if(a[i] >= *largest){
      *second_largest = *largest;
      *largest = a[i];
    }
    if (a[i] > *second_largest && a[i] != *largest){
      *second_largest = a[i];
    }
  }

}