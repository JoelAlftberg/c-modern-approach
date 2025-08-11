1) Yes they are legal since the inside of the bracket's are in their own scope
2)
a)
```
struct {
  double real;
  double imaginary;
} c1, c2, c3;
```
b)
```
struct {
  double real;
  double imaginary;
} c1 = {0.0, 0.0}, c2 = {1.0, 0.0}, c3;
```
c)
```
c1 = c2;
```
d)
```
c3.real = c1.real + c2.real;
c3.imaginary = c1.imaginary + c2.imaginary;
```
3)
a)
```
struct complex{
  double real;
  double imaginary;
};
```
b)
```
struct complex c1, c2, c3;
```
c)
```
struct complex make_complex(double imaginary, double real){
  return (struct complex) {real, imaginary};
}
```
d)
```
struct complex add_complex(struct complex c1, struct complex c2){
  return (struct complex) {c1.real + c2.real, c1.imaginary + c2.imaginary};
}
```
4)
```
typedef struct{
  double real;
  double imaginary;
} Complex;
```
b)
```
Complex c1, c2, c3;
```
c)
```
Complex make_complex(double imaginary, double real){
  return (Complex) {real, imaginary};
}
```
d)
```
Complex add_complex(Complex c1, Complex c2){
  return (Complex) {c1.real + c2.real, c1.imaginary + c2.imaginary};
}
```
5)
a)
```
int day_of_year(struct date d){
    for(int i = 1; i != d.month; i++){
      switch(i){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
          d.day += 31;
          break;
        }
        case 4: case 6: case 9: case 11:{
          d.day += 30;
          break;
        }
        case 2:{
          if (d.year % 4 && (d.year % 400 && d.year % 100)){
            d.day += 28;
            break;
          }
          else{
            d.day += 29;
            break;
          }
        }
      }
    }
  return d.day;
  } 
```
b)
```
  int compare_dates(struct date d1, struct date d2){
    int day_of_year_d1 = day_of_year(d1);
    int day_of_year_d2 = day_of_year(d2);

    if (day_of_year_d1 == day_of_year_d2){
      return 0;
    }
    day_of_year_d1 > day_of_year_d2 ? 1 : -1;
}
```
6)
```
struct time  split_time(long total_seconds){

  struct time t;

  time.hour = total_sec / 3600;
  total_sec %= 3600;
  time.minutes = total_sec / 60;
  total_sec %= 60;
  time.seconds = total_sec;

  return t;

}
```
7)
a)
```
struct fraction reduce_fraction(struct fraction f){
  int i, j, remainder, gcd; 
  i = f.numerator, j = f.denominator;
  while (i > 0 && j / i > 0){
    remainder = j % i;
    j = i;
    i = remainder;
  }
  gcd = j;

  f.numerator /= gcd;
  f.denominator /= gcd;

  return f;
}
```
b)
```
struct fraction add_fraction(struct fraction f1, struct fraction f2){
  struct fraction f3;

  f1.nominator *=  f2.denominator;
  f2.nominator *= f1.denominator;

  f3.nominator = f1.nominator + f2.nominator;
  f3.denominator = f1.denominator * f2.denominator;
  
  return reduce_fraction(f3);
  
}
```
c)
```
struct fraction subtract_fraction(struct fraction f1, struct fraction f2){
  struct fraction f3;


  f1.nominator *=  f2.denominator;
  f2.nominator *= f1.denominator;

  f3.nominator = f1.nominator - f2.nominator;
  f3.denominator = f1.denominator * f2.denominator;
  
  return reduce_fraction(f3);
  
}
```
d)
```
struct fraction multiply_fraction(struct fraction f1, struct fraction f2){
  struct fraction f3;

  f3.nominator = f1.nominator * f2.nominator;
  f3.denominator = f1.denominator * f2.denominator;
  
  return reduce_fraction(f3);
  
}
```
e)
```
struct fraction divide_fractions(struct fraction f1, struct fraction f2){
  struct fraction f3;
  struct fraction f2_flip;

  f2_flip.nominator = f2.denominator;
  f2_flip.denominator = f2.nominator;
  
  f3 = multiply_fraction(f1, f2_flip);
  return reduce_fraction(f3);
  
}
```
8)
a)
```
const struct color MAGENTA{255, 0, 255};
```
b)
```
const struct color MAGENTA { .red = 255, 0, .blue = 255};
```
9)
a)
```
struct color make_color(int red, int green, int blue){
  return (struct color) {red, green, blue};
}
```
b)
```
int getRed(struct color c){
  return c.red;
}
```
c)
```
bool equal_color(struct color c1, struct color c2){
  if (c1 != c2){
    return false;
  }
  return true;
}
```
d)
```
struct color brighter(struct color c){
  if ( (c.red + c.green + c.blue) == 0){
    return (struct color) {3, 3, 3};
  }
  if (c.red > 0 && c.red < 3){
    c.red = 3;
  }

  if (c.green > 0 && c.green < 3){
    c.green = 3;
  }
  if (c.blue > 0 && c.blue < 3){
    c.blue = 3;
  }
  
  c.red = (c.red / 0.7) > 255 ? 255 : (c.red / 0.7);
  c.green = (c.red / 0.7) > 255 ? 255 : (c.green / 0.7);
  c.blue = (c.blue / 0.7) > 255 ? 255 : (c.blue / 0.7);

  return c;
}
```
e)
```
struct color brighter(struct color c){
  return (struct color) {(c.red * 0.7), (c.green * 0.7), (c.blue * 0.7)};
}
```
10)
a)
```
int rectangle_area(struct rectangle r){

  return ((r.upper_left.x - r.lower_right.x) *  (r.upper_left.y - r.lower_right.y));

}
```
b)
```
struct point rectangle_center(struct rectangle r){

  return (struct point) {r.upper_left.x - r.lower_right.x) / 2,  (r.upper_left.y - r.lower_right.y) / 2};

}
```
c)
```
struct rectangle rectangle_move(struct rectangle r, int x, int y){
  r.upper_left.x += x;
  r.upper_left.y += y;
  r.lower_right.x += x;
  r.lower_right.y += y;

  return r;
}
```
d)
```
bool determine_point_in_rectangle(struct rectangle r, struct point p){

  if (p.x > r.lower_right.x || p.y < r.lower_right.y || p.x < r.upper_left.x || p.y  > r.upper_left.y){
    return false;
  } 
  return true;
}
```
11)

>Simple arithmetics and knowledge that unions allocate space according to their largest member gives us:\
8 + 8 + 4 = 20\
Answer: 20 bytes
12)
>The struct is the largest type in the union, therefore it will allocate space for the char b[4], double c and int d:\
4 + 8 + 4 = 16\
Answer: 16 bytes
13)
>a) legal\
b) legal\
c) s.rectangle.height = 25;
d) legal
e) s.u.circle.radius = 5;
f) s.u.circle.radius = 5;
14)
a)
```
```
b)
```
```
c)
```
```

