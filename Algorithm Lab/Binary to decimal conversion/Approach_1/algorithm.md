# Coverting binary numbers to decimal number
1. Start
2. declare variable i, binary, decimal, rem, base
3. intialize decimal = 0 and base = 1
4. Read value for binary
5. check whether binay is not zero
6. If True:

`` rem = binary % 2 ``
`` dec = dec + rem * base``
``base = base * 2``
``binary = binary // 10``

7. else come out of loop
8. Display the value of dec
9. stop
