# Fibonacci Series

## Definition

The Fibonacci series is a sequence in which each number is the sum of the previous two numbers.

Example:

0, 1, 1, 2, 3, 5, 8, 13, 21, ...

## Logic

The first two numbers are:

- First number = 0
- Second number = 1

The next number is calculated as:

`next = first + second`

Then update the values:

`first = second`

`second = next`

Repeat this process to generate the required number of terms.

## Algorithm

1. Start.
2. Read the number of terms `n`.
3. Set `first = 0` and `second = 1`.
4. Repeat `n` times:
   - Print `first`.
   - Calculate `next = first + second`.
   - Set `first = second`.
   - Set `second = next`.
5. Stop.

## Example

If `n = 7`:

```text
8
