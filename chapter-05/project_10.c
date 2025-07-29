#include <stdio.h>

int main(){

  int grade;

  printf("Enter a numerical grade (0-100): ");
  scanf("%d", &grade);


  if (grade > 100 || grade < 0){
    grade = -100;
  }

  switch(grade / 10){
    case 10: case 9:{
      printf("Letter grade: A\n");
      break;
    }
    case 8:{
      printf("Letter grade: B\n");
      break;
    }
    case 7:{
      printf("Letter grade: C\n");
      break;
    }
    case 6:{
      printf("Letter grade: D\n");
      break;
    }
    case 5: case 4: case 3: case 2: case 1: case 0:{
      printf("Letter grade: F\n");
      break;
    }
    default:{
      printf("Error: The number you entered is not in range 0-100\n");
      break;
    }
  }

  return 0;

}