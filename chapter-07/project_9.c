#include <stdio.h>
#include <ctype.h>

int main(){

  char am_pm;
  int hour, minute;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hour, &minute, &am_pm);
  switch(toupper(am_pm)){
    case 'A':{

      if (hour != 12){
        printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);
      }
      else{
                printf("Equivalent 24-hour time: 00:%.2d\n", minute);
      }
      break;

    }
    case 'P':{

      if (hour != 12){
        printf("Equivalent 24-hour time: %.2d:%.2d\n", hour + 12, minute);
      }
      else{
        printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);
      }
      break;

    }

  }

  return 0;

}