#include <stdio.h>

int main(){

  int grid[5][5];
  int number, row, column, row_sum, column_sum, high_score, lowest_score;

  for(row = 0; row < 5; row++){
    printf("Enter student %ds results: ", row + 1);

    for(column = 0; column < 5; column++){
      scanf("%d", &grid[row][column]);
    }

  }

  printf("\nIndividual scores\n");
  for(row = 0; row < 5; row++){

    row_sum = 0;

    for(column = 0; column < 5; column++){
      row_sum += grid[row][column];
    }
    printf("--- Student %d ---\nTotal score: %d\nAverage score: %d\n", row + 1, row_sum, row_sum / 5);

  }


  printf("\nQuiz scores\n");
  for(row = 0; row < 5; row++){
    
    // reset high_score and lowest_score
    column_sum = 0, high_score = -1, lowest_score = -1;

    for(column = 0; column < 5; column++){
      number = grid[column][row];
      column_sum += number;

      // initializes high_score and lowest_score if they are not set
      high_score = (high_score < 0) ? number : high_score;
      lowest_score = (lowest_score < 0) ? number : lowest_score;

      high_score = number > high_score ? number: high_score;
      lowest_score = number < lowest_score ? number: lowest_score;

    }
    printf("--- Quiz %d ---\nAverage score: %d\nHighest score: %d\nLowest score: %d\n", row + 1, column_sum / 5, high_score, lowest_score);
    
  }

  printf("\n");

  return 0;

}