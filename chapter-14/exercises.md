1)
>a) `#define cube(x) ((x)*(x)*(x))`\
b) `#define mod_4(x) ((x) % 4)`\
c) `#define product_less_than_100(x,y) ((x) * (y) < 100 ? 1 : 0)`
2)
> `#define NELEMS(a) ( sizeof(a)/sizeof((a)[0]) )`
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