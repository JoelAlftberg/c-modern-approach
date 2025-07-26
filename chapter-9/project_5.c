#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(){

  int i;
  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &i);

  char grid[i][i];

  create_magic_square(i, grid);
  print_magic_square(i, grid);

  return 0;

}

void create_magic_square(int n, char magic_square[n][n]){


  // initialize with zeroes
  for (int y = 0; y < n; y++){
    for (int x = 0; x < n; x++){
      magic_square[x][y] = 0;
    }
  }


  int x, y = 0, number = 1;

  x = n / 2;

  magic_square[x][y] = number++; // set initial number 1 in middle of top row

  while (number <= n * n){

    int old_x = x, old_y = y;

    if ((old_x + 1) >= n){
      x = 0;
    }
    else{
      x = old_x + 1;
    }

    if ((old_y - 1) < 0){
      y = (n - 1);
    }
    else{
      y = old_y - 1;
    }


    
    if (magic_square[x][y] == 0){
      magic_square[x][y] = number++;
    }

    // if the space is occupied, check first if going down one position (y + 1) would put us outside of the grid, instead put it at the top of the column
    else {
      if (old_y + 1 >= n){
        magic_square[x = old_x][y = 0] = number++;
      }
      else{
        magic_square[x = old_x][ y = old_y + 1] = number++;
      }
    }
  
  }
    
}






void print_magic_square(int n, char magic_square[n][n]){

  //printing needs to be flipped so that x is y and y is x
  int x, y;
  for (y = 0; y < n; y++){
    for (x = 0; x < n; x++){
      printf("%5d", magic_square[x][y]);
    }
    printf("\n\n");
  }

}