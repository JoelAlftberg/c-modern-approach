1)
> b, c, e, h, i
2)
> a) illegal\
b) legal, output would be 'a'\
c) legal, outputs string\
d) illegal, points only to char not to string
3)
> i = 12\
s = abc34\
j = 56
4)
a)
```
int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if ( i == 0 && isspace(ch));
    else if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
```
b)
```
int read_line(char str[], int n)
{
  int ch, i = 0;

  while (!isspace((ch = getchar())))
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
```
5)
a)
```
void capitalize(char string[]){
  int i = 0;
  while(string[i] != '\0'){
    string[i] = toupper(string[i]);
    i++;
  }
}
```
```
b)
void capitalize(char *string){
  char *p = string;
  while(*p != '\0'){
    if (isalpha(*p)){
      *p = toupper(*p);
    }
    p++;
  }
}
```
6)
```
void censor(char *string){
  char *p = string;
  while (p + 2 != '\0'){
    if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o'){
      *p = *(p + 1) = *(p + 2) = 'x';
    }
    p++;
  }
}
```
7) 
>d is not the same, since the other replaces the string with *'\0'* and strcat adds  *'\0'* to the end of the string *str*
8)
>tired-or-wired?
9)
>s2 is smaller than s1 -> strcat(s1, s2) -> s1 = "computerscience" -> s1[9] = 'c' -> s1 = "computers" 
10)
>the value of q is undefined so strcpy(q, p) will copy the value of the string p to somewhere random in memory 
11)
```
int my_strcmp(char *s, char *t){

  while ((*s == *t)){
    if (*s == '\0'){
      return 0;
    }
    s++; t++;
  }
  return *s - *t;
}
```
12)
