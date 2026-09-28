# Algorithm for reversing a decimal number

1. Start 🟢
2. declare integer variables `d`,`n`.
3. Initialise `rev = 0`.
4. Read value for `n` from user.
5. check whether `n > 0`.
6. If True do

`d = n % 10`

`rev = rev * 10 + d`

`n = n / 10`

7. Repeat step 5 and 6 until `n == 0`.
8. Display the value of `rev`.
9. stop 🛑
