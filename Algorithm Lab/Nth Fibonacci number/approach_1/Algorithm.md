# algorithm for N tn Fibonacci number
1. start
2. declare int type variables a,b,c,n,i;
3. initialise a = 0 and b = 1
4. read n from user
5. If n == 1 display 0
6. if n == 2 display 1
7. else start for loop from i = 3
8. check i <= n
9. if True :
- c = a + b
- a = b
- b = c
10. increment i by 1
11. repeat steps 8 - 10 untill i > n
12. Display b.
13. stop
