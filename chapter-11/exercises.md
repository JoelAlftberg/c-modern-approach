**1)** a, g - h might seem correct also but it is the address of a dereference pointer (since i is not a pointer this is incorrect\
**2)** e, f, i\
**3)**  
```
corrections: 
  *sum = 0.0
  *sum += a[i];
  *avg = *sum /n
```
**4)**  
```
void swap(int *p, int *q){ 
  int temp = *p;
  *p = *q;
  q* = temp;
}
```
**5)**
```
void split_time(long total_sec, int *hr, int *min, int *sec){
  *hr = total_sec / 3600;
  total_sec %= 3600;
  *min = total_sec / 60;
  total_sec %= 60;
  *sec = total_sec;
}
```
**6)**
```
void find_two_targets(int a[], int n, int *largest, int *second_largest){

  *largest = 0;
  *second_largest = 0;

  for(int i = 0; i < n; i++){
    if(a[i] >= *largest){
      *second_largest = *largest;
      *largest = a[i];
    }
    if (a[i] > *second_largest && a[i] != *largest){
      *second_largest = a[i];
    }
  }

}
```
**7)**
```
void split_date(int day_of_year, int year, int *month, int *day){

  bool leap_year = false;
  bool done = false;
  int i;

  if (year % 4 || (!(year % 100) && !(year % 400)) ){
    leap_year = true;
  }

  *month = 0;

  for(i = 1; i <= 12 && !done; i++){

    switch(i){
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
        if (day_of_year - 31 > 0) {
          day_of_year -= 31;
          break;
        }
        else{
          done = true;
          break;
        }
      }
      case 2:{      
        int days_in_feb = leap_year ? 28 : 29;
        if (day_of_year - days_in_feb > 0) {
          day_of_year -= days_in_feb;
          break;
        }
        else{
          done = true;
          break;
        }

      }
      case 4: case 6: case 9: case 11:{
        if (day_of_year - 30 > 0) {
          day_of_year -= 30;
          break;
        }
        else{
          done = true;
          break;
        }
      }
    }
  }
  
  *month = i - 1;
  *day = day_of_year;

}
```
8)
```
int *find_largest(int a[], int n){

  int *largest = &a[0];

  for (int i = 0; i < n; i++){
    if (a[i] >= *largest){ // refering to the value in
      largest = &a[i];
    }
  }

  return largest;
}
```