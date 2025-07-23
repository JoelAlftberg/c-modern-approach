1 a) 55
  b) 70 + 42 + 7 = 112 + 7  = 119
  c) 12 + (11 * 16) + 2560 = 12 + 176 + 2560 = 183 + 2560 = 2748

2 a) floating point
  b) floating point
  c) illegal (9 can't be present in octal)
  d) illegal (underscore in int)
  e) floating point

3) b) short float

4) d) since it's not a string

5) 0b10000001, although correct in binary, not allowed in C

6 a) char - max value 31 which char is enough for
  b) short int - max value 365, char not enough since max value of char is 255 (1 byte/8 bits)
  c) short int - needs to store at least 1440 (16 bits enough)
  d) long int - needs to be longer than 64 536

7 a) \7
  b) \12
  c) \15
  d) \11

8 a) \0x07
  b) \0x0C
  c) \0x0F
  d) \0x0B

9) int, char will be promoted to int

10) unsigned int, typecasting j (long) to int will then make it be promoted into unsigned int when multiplied with k

11) double, float will become double and then also int will become double

12) first int is converted to float then the result of the i + f operation is converted to double

13  a) int -3
    b) long 7
    c) float 6.5
    d) double 3.75
    e) double -1
    f) int 6

14) could fail if float is too large (since it holds 32-bit by default) and we try to cast it to int

15) typedef char Int8; 
    typedef short Int16; 
    typedef int Int32;
