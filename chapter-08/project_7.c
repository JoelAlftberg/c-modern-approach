#include <stdio.h>

int main(){

  int grid[5][5];
  int number, row, column, row_sum, column_sum;

  for(row = 0; row < 5; row++){
    printf("Enter row %d: ", row + 1);

    for(column = 0; column < 5; column++){
      scanf("%d", &grid[row][column]);
    }

  }

  printf("Row toals: ");
  for(row = 0; row < 5; row++){

    row_sum = 0;

    for(column = 0; column < 5; column++){
      row_sum += grid[row][column];
    }

    printf("%3d", row_sum);

  }


  printf("\nColumn toals: ");
  for(row = 0; row < 5; row++){

    column_sum = 0;

    for(column = 0; column < 5; column++){
      column_sum += grid[column][row];
    }

    printf("%3d", column_sum);

  }

  printf("\n");

  return 0;

}