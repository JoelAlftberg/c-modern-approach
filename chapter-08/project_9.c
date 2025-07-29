#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define GRID_SIZE 10

#define NORTH 0
#define SOUTH 1
#define WEST 2
#define EAST 3


int main(){

  srand((unsigned) time(NULL));
  
  char grid[GRID_SIZE][GRID_SIZE] = {0};
  int next_step;

  int x = 0,  y = 0; // position in x and y, top left corner of grid is 0,0
  char letter = 'A';
  grid[x][y] = letter; // A Enters in top left corner


  while(letter <= 'Z'){

    next_step = 0;
    bool north_allowed = false, south_allowed = false, west_allowed = false, east_allowed = false;
    
    if ( (y - 1 >= 0) && grid[x][y - 1] == 0 ){
       north_allowed = true;
    }
    if ( (y + 1 < GRID_SIZE) && (grid[x][y + 1] == 0)){
      south_allowed = true;
    }
    if ( (x - 1 >= 0) && (grid[x - 1][y] == 0)){
      west_allowed = true;
    }
    if ( (x + 1 < GRID_SIZE) && (grid[x + 1][y] == 0)){
      east_allowed = true;
    }

    // if the letter is surrounded by other letters or the edge of the grid
    if (north_allowed + south_allowed + east_allowed + west_allowed < 1){
      grid[x][y] = letter;
      printf("letter %c on position %i,%i couldn't move\n", letter, x, y);
      break;
    }

    next_step = rand() % 4;
    switch(next_step){

      case NORTH:{
        if (north_allowed){
          grid[x][y--] = letter++;
        }
        break;
      }

      case SOUTH:{
        if (south_allowed){
          grid[x][y++] = letter++;
        }
        break;
      }

      case WEST:{
        if (west_allowed){
          grid[x--][y] = letter++;
        }
        break;
      }

      case EAST:{
        if (east_allowed){
          grid[x++][y] = letter++;
        }
        break;
      }
      
      default:{
        break;
      }

    }

  }
  
  // Print the grid
  for(int i = 0; i < GRID_SIZE; i++){
    for(int j = 0; j < GRID_SIZE; j++){
      if (grid[i][j] == 0){
        grid[i][j] = '.';
      }
      
      printf("%2c", grid[i][j]);
    }
    printf("\n");
  }

  return 0;

}


