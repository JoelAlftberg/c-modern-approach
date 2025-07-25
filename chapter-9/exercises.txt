1) double product should be inside the function body, height should be double height instead
2)  int check(int x, int y, int n){
    if( x < 0 || y < 0 || x > n-1 || y > n -1){
    return 1;
    }
    return 0;
    }

3)  
int gcd(int n, int m){
  int remainder;
  while( n > 0){
    remainder =  m % n;
    m = n;
    n = remainder;
  }
  return m;
}

4)
int day_of_year(int month, int day, int year){

  for(int i = 1; i != month; i++){

    switch(i){
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
        day += 31;
        break;
      }
      case 4: case 6: case 9: case 11:{
        day += 30;
        break;
      }
      case 2:{
        if (year % 4 && (year % 400 && year % 100)){
          day += 28;
          break;
        }
        else{
          day += 29;
          break;
        }
      }
    }

  }

  return day;
}

5)
int num_digits(int n){
  int num = 0;
  for (; n > 0; num++){
    n /= 10;
  }

  return num;
}

6)
int digit(int n, int k){
  while (k-- > 1){
    if ( n / 10 <= 0 )
      return 0;
    n /= 10;
  }
  return n % 10;
}

7) all statements are legal but integer promotions will occur

8) a), b) are valid. c) contains no type for the parameter and d) no type for the function

9) i = 1, j = 2. this is because we are passing a value and not a reference to swap(); also it's void and we don't return anything that could be assigned from it.

10)

a)
int largest(int a[], int n){
  int high = a[0];

  for(int i = 1; i < n; i++){
    if(a[i] > high)
      high = a[i]
  }

  return high;
}
b)
double average(int a[], int n){
  int sum = 0;

  for(int i = 0; i < n; i++){
    sum += a[i]
  }
  return sum / n;

}
c)
int largest(int a[], int n){
  int count = 0;

  for(int i = 0; i < n; i++){
    if(a[i] > 0)
      count++;
  }

  return count;
}

11)
float compute_GPA(char grades[], int n){
  int i = 0;
  float sum = 0;
  while(i++ < n){
    switch(toupper(grades[i])){
      case 'D':
        sum += 1;
        break;
      case 'C':
        sum += 2;
        break;
      case 'B':
        sum += 3;
        break;
      case 'A':
        sum += 4;
        break;
      default:
        break;
    }
  }

  return sum / n;
}
12)
double inner_product(double a[], double b[], int n){
  double sum = 0;
  for(int i = 0; i < n; i++){
    sum += a[i] * b[i]
  }
  return sum;
}
13)
int evaluate_position(char board[8][8]){

  int black = 0, white = 0;

  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; i++)
      switch(piece){
        case 'Q': 
          white += 9;
        case 'R': 
          white += 5;
        case 'B':
          white += 3;
        case 'N':
          white += 3; 
        case 'P':
          white += 1;
        case 'q': 
          black += 9;
        case 'r': 
          black += 5;
        case 'b':
          black += 3;
        case 'n':
          black += 3; 
        case 'p':
          black += 1;
      }
  }

  return black > white ? black - white : white - black;
  
}
14) will return false immediately after finding a value that is not zero, which means it won't progress further to find if there are later values that are zero
15)
double median(double x, double y, double z){
  double median = 0;
  if (x <= y){
    if (y <= z){
      median = y;
    }
    else if (x <= <){
      median = z;
    }
    else{
      median = x;
    }
  }
  else if (z <= y){
    median = y;
  }
  else if (x <= z){
    median = x;
  }
  return median;
}
16)
int fact(int n){
  return n <= 1 ? 1 : n * fact(n - 1); 
}
17)
int fact(int n){
  result = 1;
  for(int i = 0; i < n; i++){
    result *= (n - i)
  }
}
18)
int gcd(int m, int n){
  if (n == 0){
    return m;
  }
  else{
    gcd(n, m % n);
  }
}
19)
prints the binary representation of the integer n


