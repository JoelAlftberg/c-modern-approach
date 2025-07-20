#include <stdio.h>

int main(){

  int i, j, k, l, max1, min1, max2, min2;

  printf("Enter four integers (i j k l): ");
  scanf("%d %d %d %d", &i, &j, &k, &l);

  if (i > j){
    max1 = i;
    min1 = j;
  }
  else{
    max1 = j;
    min1 = i;
  }

  if (k > l){
    max2 = k;
    min2 = l;
  }
  else{
    max2 = l;
    min2 = k;
  }

  if (max1 < max2){
    max1 = max2;
  }

  if (min1 > min2){
    min1 = min2;
  }

  printf("Largest: %d\nSmallest: %d\n", max1, min1);

  return 0;

}