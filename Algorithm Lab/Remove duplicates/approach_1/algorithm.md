## Algorithm: Remove Duplicate Elements from an Array

1. Start.
2. Read the size of the array `n`.
3. Read `n` elements into array `a`.
4. Repeat for `i = 0` to `n-1`:
   - Repeat for `j = i+1` to `n-1`:
     - If `a[i] == a[j]`:
       1. Repeat for `k = j` to `n-2`:
          - Set `a[k] = a[k+1]`.
       2. Decrement `j` by 1.
       3. Decrement `n` by 1.
5. Display the array containing unique elements.
6. Stop.
