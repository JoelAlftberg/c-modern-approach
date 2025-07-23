#include <stdio.h>

int main(){


  /* Conclusion:
      short is 16 bits
      int is 32 bits
      long is 64 bits
  */
 
  long i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);

  for (i = 1; i <= n; i++){
    printf("%20ld%20ld\n", i, i * i);
  }

  return 0;

}