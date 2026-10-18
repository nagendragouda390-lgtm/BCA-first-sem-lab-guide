# algorithm for N tn Fibonacci number
1. start
2. declare int type variables `a`,`b`,`c`,`n`,`i`;
3. initialise `a = 0` and `b = 1`
4. read `n` from user
5. start for loop from `i = 3`
6. check `i <= n`
7. if True :
- `c = a + b`
- `a = b`
- `b = c`
8. increment `i` by 1
9. repeat steps 6 - 8 untill `i > n`
10. Display `b`.
11. stop
