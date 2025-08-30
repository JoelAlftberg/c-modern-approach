1)
>a) 8 >> 10 >> 1 = 0\
b) i & ~i = 0\
c) 0 ^ 0 = 0\
d)7 ^ 8 = 15\
2)
>i ^= 1 << 4\
if i is 0b1000 for example, then:\
0b1000 XOR 0b1000 = 0b0000
if i is 0b0000 them:\
0b0000 XOR 0b1000 = 0b1000\
so this will "flip/toggle" the 4th bit
3)
>It will swap the values of X and Y bitwise
4)
```
#define MK_COLOR(red, green, blue) ((unsigned long) ((red) << 16 | (green) << 8 | (blue)))
``` 
5)
```
#define GET_RED(color) ((short) ((color >> 16) & 0xFF))
#define GET_GREEN(color) ((short) ((color >> 8) & 0xFF))
#define GET_BLUE(color) ((short) (color & 0xFF))
```
6)
```
unsigned short swap_bytes(unsigned short i){
  unsigned short x = (i << 8);
  unsigned short y = (i >> 8);
  return x | y;
}
```
7)
```
unsigned int rotate_left(unsigned int i, unsigned int n){
  n %= (sizeof(i) * 8); /* normalize for n >= 32 */
  return (i << n) | ( i >> (sizeof(i) * 8 - n));
}
unsigned int rotate_right(unsigned int i, unsigned int n){
  n %= (sizeof(i) * 8); /* normalize for n >= 32 */
  return (i >> n) | ( i << (sizeof(i) * 8 - n));
}
```
8)
>a) n bits set (bit-mask)\
b) returns a bit-field starting at m and of n-length\
9)
```
int count_ones(unsigned char ch){
  
}
```
