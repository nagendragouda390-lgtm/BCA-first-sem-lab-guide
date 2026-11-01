## Algorithm: Count Duplicate Elements in an Array

1. Start.
2. Read the size of the array `n`.
3. Read `n` elements into array `a`.
4. Repeat for `i = 0` to `n-1`:
   - Initialize `count = 1` and `copied = 0`.
   - Repeat for `j = 0` to `i-1`:
     - If `a[j] == a[i]`, set `copied = 1`.
   - If `copied == 0`:
     - Repeat for `k = i+1` to `n-1`:
       - If `a[k] == a[i]`, increment `count` by 1.
     - If `count > 1`, display the element and its frequency.
5. Stop.
