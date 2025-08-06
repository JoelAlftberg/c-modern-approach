#include <stdio.h>
#include <string.h>

void reverse_name(char *name);

int main(void) {

  char name[100];
  char input, *p = name;

  printf("Enter a firstname and lastname: ");
  while((input = getchar()) != '\n'){
    *p++ = input;
  }
  reverse_name(name);
  
  printf("Reversed name: %s\n", name);

  return 0;

}

void reverse_name(char *name){
  
  char *p = name, initial;

  while(*p == ' ')
    p++;

  initial = *p;

  while(*p++ != ' ' && *p || *p == ' ');

  while(*p && *p != ' ')
    *name++ = *p++;

  *name++ = ','; *name++ = ' '; *name++ = initial;
  while(*name != '\0'){
    *name++ = '\0';
  }


}