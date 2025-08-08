1)
>a)Handling complexity, make the codebase more readable, save compilation time, isolate changes, code reusability\
b)Makes compilation/linking more complex, dependencies are harder to resolve between files and duplicate delcarations may appear
2)
>option b), since if we include the file in two different source files then the linker will not be able to link the object code because it's duplicated
3)
>No it will work, the since it will go through a sequence of implementation defined places which includes /usr/include
4)
a)
> Output if DEBUG is defined:\
Value of i: 1\
Value of j: 2\
Value of k: 3\
Value of i + j: 3\
Value of 2 * i + j - k: 1\

b)
>Output if DEBUG is not defined:

c)
>The difference is that if debug is not defined PRINT_DEBUG(n) will not print anything

d)
>Yes it's neccessary since otherwise DEBUG won't be defined before checking the debug.h directives

5)
```
demo: main.o f1.o f2.o
  gcc -o demo main.o f1.o f2.o

main.o: main.c f1.h
  gcc -c main.c

f1.o: f1.c f1.h f2.h
  gcc -c f1.c

f2.o: f2.c f1.h f2.h
  gcc -c f2.c
```
6)
>a) All three files need to be compiled, main.c, f1.c, f2.c, as well and the demo executable\
b) Only f1.c and the demo executable\
c) All three files\
d) Then f1.c and f2.c needs to be recompiled into object code