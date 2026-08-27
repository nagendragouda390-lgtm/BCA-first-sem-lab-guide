# Fibonacci Number Using Recursion

## Algorithm

1. Start.
2. Read the value `a`.
3. Call the function `fib(a)`.
4. Check if `a == 1`.
   - If yes, return `0`.
5. Check if `a == 2`.
   - If yes, return `1`.
6. If both conditions are false, calculate:
   `fib(a-1) + fib(a-2)`
7. Return the calculated value.
8. Display the `a`th Fibonacci number.
9. Stop.

## Example

If `a = 7`:

```text
Fibonacci Series:
0 1 1 2 3 5 8

7th Fibonacci number = 8
