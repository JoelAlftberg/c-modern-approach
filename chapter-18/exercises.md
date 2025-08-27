1)
>a) static storage, pointer to char pointer type, function declarator with int parameter\
b) volatile type-qualifier, unsigned long type, no specific declarator\
c) extern storage, array of char pointers and array of chars\
d) static storage, const type qualifier char array with an empty declarator
2)
>a) extern\
b) static\
c) extern and static
3)
>**float a**: static storage, file scope, external linkage\
**void f()**: static, storage, file scope, external linkage\
**register double b**: auto storage, block scope, no linkage\
**int c**: static storage, function/block scope, no linkage\
**auto char d**: auto storage, block scope, no linkage  
4)
>If f has never been called before the value returned will be 0, if it's been called five times previously it will be 50
5)
>a) false, they can also have block scope\
b) false, if they are declared with the extern storage class
c) true, static variables are internally linkable
d) true
6)
>static int n = 1;
7)
>a) false\
b) true\
c) true\
d) true
8)
>a) x is an array of function pointers that returns a char\
b) x is a function pointer that returns an array of 5 integers\
c) x is a function pointer that returns a function pointer to a function with an int parameter and returns a float pointer,\
d)x is a function pointer that takes an int as its first parameter and a function pointer as it's second parameter, it returns a function pointer to a function that takes int as it's parameter and returns nothing
10)
a)
```
char *(*p(char *));
```
b)
```
void *f(struct t *p, long int n)(void);
```
c)
```
void (*a[])(void) = { insert, search, update, print };
```
d)
```
struct t (*b[10])(int, int);
```
11)
```
int *f(int);
int (*g(int))(int);
int (*a[10])(int);
```
12)
>a) f is a pointer to a function that that as its paremeters take another pointer to a function which returns float and has long as it's parameter, it's second parameter takes a char pointer, the function f points to takes a double as its argument and returns a value of type int\
b) int i = *f(g, &ch))(13.37)
13)
>a) legal\
b) illegal\
c) legal
d) legal
14)
>e
15)
>storage duration, static vs auto, static has 0 as default, auto has "random" initial value