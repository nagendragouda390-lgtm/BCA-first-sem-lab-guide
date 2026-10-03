# Algorithm for generating prime factors of an number

1. Start
2. Declare variable `n`,`i`.
3. Read value for `n` from user.
4. initialize `i = 2`.
5. Check whether `n % i == 0`.
6. If True Display `i`.
7. Else increment `i` by 1.
8. Reassign `n` value as `n/i`.
9. Repeat step 5 to 8 until `n > 1`.
10. Stop
