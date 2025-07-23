1) it will be less readable, reader would have to check that array a really uses type that
2) a[d-'0'] so if d = '0' element 0 will be selected, if d = '3' we will have [d-'0'] which equals to [51-48] = [3]
3) bool wekend[7] = {1, 0, 0, 0, 0, 0, 1};
4) bool weekend[7] = {[0] = true, [6] = true};
5) fib_numbers[40] = {0, 1}; for(i = 0; i < sizeof(fib_numbers) / sizeof(fib_numbers[0]); fib_numbers[i] += fib_numbers[i-1] + fib_numbers[i-2]);
6 const int segments[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},
  {0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, 0, 0, 1},
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
  } 
7) const int segments[10][7] = {
  {1, 1, 1, 1, 1, 1},
  {0, 1, 1},
  {1, 1, 0, 1, 1, 0, 1},
  {1, 1, 1, 1, [6] = 1}, // same amount of space
  {0, 1, 1, 0, 0, 1, 1},
  {1, 0, 1, 1, 0, 1, 1},
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1},
  {1, 1, 1, 1, 1, 1, 1},
  {1, 1, 1, 1, 0, 1, 1}
  } 

8) double temperature_readings[30][24] = {0};

9) int sum = 0, average = 0; for(int i = 0; i < sizeof(temperature_readings) / sizeof(temperature_readings[0][i]); i++){ sum += temperature_readings[0][i];} average = sum / 30;
