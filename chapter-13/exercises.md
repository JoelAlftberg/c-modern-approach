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
```
void get_extension(const char *file_name, char *extension){

  while (*file_name){
    if (*file_name++ == '.'){
      strcpy(extension, file_name);
      return;
    }
  }
  extension = "\0";
  
}
```
13
```
void build_index_url(const char *domain, char *index_url){

  strcpy(index_url, "http://www.");
  strcat(strcat(index_url, domain), "/index.html");
  
}
```
14
>It prints: Grinch\
The reason for this is that --*p decrements the value that *p points to and not the pointer itself. So each letter gets shifted one position to the left in the alphabet.
15)
>a) 0\
b) 1\
c) returns the position in string s of the first character that appears in both arrays
16)
```
int count_spaces(const char s[]){
  int count = 0;

  while(*s++)
    if (*s == ' ')
      count++;
  return count;
}
```
17)
```
bool test_extension(const char *file_name, const char *extension){

  while(*file_name++ != '.');

  while(*file_name && *extension){
    if (toupper(*file_name++) != toupper(*extension++)){
      return 0;
    }
  }

  return 1;

}
```
18)
```
void remove_filename(char *url){

  char *p = url;

  while(*url){
    if(*url == '/'){
      p = url;
    }
    url++;
  }

  *p = '\0';

}
```