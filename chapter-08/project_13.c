#include <stdio.h>

int main(void) {

    char ch, initial, lastname[20] = {0};

    int i = 0;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) == ' '); // if user enters spaces do nothing

    initial = ch; // first char from stream will be the initial

    while ((ch = getchar()) != ' '); // user is now entering firstname, do nothing

    while ((ch = getchar()) != '\n'){ // get characters into the array until newline or space
      if (ch == ' '){
        continue;
      } 
      lastname[i++] = ch;
    }

    for(i = 0; i < 20; i++){
      printf("%c", lastname[i]);
    }

    printf(", %c\n", initial);

    return 0;
}