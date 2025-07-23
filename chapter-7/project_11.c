#include <stdio.h>

int main(void) {

    char ch, initial;
    scanf(" %c", &initial); // the space in the start will include as many spaces as the user enters and %c will only get the first character from the buffer


    while ((ch = getchar()) != ' '); // as long as user is typing letters do nothing

    while ((ch = getchar()) == ' '); // if they start typing letters again do nothing

    putchar(ch); // Clear the buffer

    while ((ch = getchar()) != '\n' && ch != ' '){ // print every character the user types in the surname
      putchar(ch);
    }

    printf(", %c\n", initial);

    return 0;
}