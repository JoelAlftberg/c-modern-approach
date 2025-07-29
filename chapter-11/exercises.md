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