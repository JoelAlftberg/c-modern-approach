#include <stdio.h>
#define MAX_SIZE 100

void selection_sort(int a[], int n){

  if (n < 0){
    return;
  }

  int i, temp, index_highest, highest = 0;

  for(i = 0; i <= n; i++){
    if (a[i] > highest){
      highest = a[i];
      index_highest = i;
    }
  }

  temp = a[n];
  a[n] = highest;
  a[index_highest] = temp;

  selection_sort(a, n-1);

}

int main(){

  int ch;
  int numbers[MAX_SIZE] = {0}, i = 0, j = 0;

  printf("Enter a series of integers: ");
  
  for(i = 0; i < MAX_SIZE; i++){

    scanf("%d", &numbers[i]);

    if ((ch = getchar()) == '\n'){
      break;
    }

  }

  selection_sort(numbers, i);

  printf("Printing sorted array: ");
  for(j = 0; j <= i; j++){
    printf("%2d ", numbers[j]);
  }
  
  return 0;

}