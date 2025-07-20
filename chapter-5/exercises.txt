1 a) 1 (6 == 6)
  b) 1 ( 1 > 5 = 0, 0 < 10 = 1 )
  c) 1 (0 == 0)
  d) 0 (3 + 3 < 5)

2 a) 1 (!i = 0, 0 < 5)
  b) 1 (!!i = 1, !j = 0, 1 + 0 = 1)
  c) 1 (0 || -5 = 1, 5 && 1 = 1)
  d) 1 (1 < 3)

4) my solution: i == j ? 0 : (i > j ? 1 : -1), books solution: (i > j) - (i < j)

5) The statement is legal but  0 >= 1 will be evaluated first netting a 0 and then compare 0 <= 10 and that will return a 1 which will print the statement

6) The statement is legal but won't do what the author of the code thinks
   (-) will have precende and give you the following expression n == -9, the if statement will be (0) and therefore do nothing when n = 5 since 5 != -9

7) 17 and 17

8) teenager = i >= 13 && i <= 19;

10) 1 % 3 = 1 -> one, since no break statement it will be onetwo


  

    