1)
>a) static storage, pointer to char pointer type, function declarator with int parameter\
b) volatile type-qualifier, unsigned long type, no specific declarator\
c) extern storage, array of char pointers and array of chars\
d) static storage, const type qualifier char array with an empty declarator
2)
>a)extern\
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
