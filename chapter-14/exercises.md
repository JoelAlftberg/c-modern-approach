1)
>a) `#define cube(x) ((x)*(x)*(x))`\
b) `#define mod_4(x) ((x) % 4)`\
c) `#define product_less_than_100(x,y) ((x) * (y) < 100 ? 1 : 0)`
2)
```
#define NELEMS(a) ( sizeof(a)/sizeof((a)[0]) )
```
3)
>a) 4\
b) 4/2*2 = 4 (left to right since / * share precedence)\
c)`#define DOUBLE(x) (2*(x))`
4)
>a) parenthesis around replacement-list and arguments in replacement list to fix the issue\
b) parenthesis around replacement-list
5)
>a) s[3] - 'a' + 'A' = 'D'\
b) s[2] is printed since 'a' <= ('0') is false which increments i, then before getting the value we increment i again so it becomes 2
6)
>a) `#define DISP(f, x) printf(#f "(%g) = %g\n", (x), f((x)))`\
b)`#define DISP(f, x, y) printf(#f "(%g, %g) = %g\n", (x), (y), f((x), (y)))`
7)
>a)`long long_max(long x, long y){ return x > y ? x : y; }`\
b)Since there is a space in the name of the type it will cause the function to be expanded to unsigned long unsigned long_max\
c)Give the unsigned long a typedef that does not contain a space like unsigned_long or ulong
8)
```
#define STRINGIZE(x) #x
#define EXPAND_TO_STRING(x) STRINGIZE(x)
#define LINE_FILE "Line " EXPAND_TO_STRING(__LINE__) " of file " __FILE__
```
9)
a)
```
#define CHECK(x, y, n) (( ((x) <= (n-1)) && ((x) >= 0) ) && (((y) <= (n-1)) && ((y) >= 0)))
```
b)
```
#define MEDIAN(x, y, z) ((x) >= (y) && (x) >= (z)) ? ( (y) >= (z) ? (y) : (z) ) : ( ((x) <= (y) && (x) <= (z)) ? ((y) >= (z) ? (z) : (y)) : (x) )
```
c) 
```
#define POLYNOMIAL(x) ( \
(3 * (pow((x),5))) +    \
(2 * (pow((x),4))) -    \
(5 * (pow((x),3))) -    \
((pow((x),2))) + (7 * (x)) - 6)
```
10)
>Macros may evaluate arguments more than once, they are not very debuggable, they don't support type checking, don't support function pointers and don't handle control flow very well.
11)
```
#define ERROR(format_str, ...) fprintf(stderr, format_str, __VA_ARGS__)
```
12)
>The following tests will fail: **c**, **e**
13)
a)
```
void f void();

int main(void)
{
  f();
  return 0;
}

void f(void)
{
  printf("N is undefined\n");
}
```
b) 
>*N is undefined*
14)
```
int main(void)
{
  int a[10], i, j, k, m;

  i = j;

  i = 10 * j + 1;
  i = (x,y) x-y(j, k) // error
  i = (j) * (j) * (j) * (j);
  i = (j) * (j) * (j);
  i = jk //error
  puts("i" "j");

  i = (j);

  return 0;
}
```
>#undef SQR\
i = SQR(j);\
error, SQR undefined
15)
```
#if defined ENGLISH
  printf("Insert Disk 1");
#elif defined FRENCH
  printf("Inserez Le Disque 1");
#elif defined SPANISH
  printf("Inserte El Disco 1");
#endif
```
16)
```

```