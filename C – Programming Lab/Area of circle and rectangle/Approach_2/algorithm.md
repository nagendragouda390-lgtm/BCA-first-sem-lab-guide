# Algorithm for finding area of circle and triangle
1. Start.
2. Define PI = 3.143.
3. Declare variables r, a, b, c, AC, s, AT.
4. Read the radius r of the circle.
5. Read the three sides a, b, c of the triangle.
6. Calculate the area of the circle: AC = PI × r × r
7. Display the area of the circle.
8. Check whether the three sides form a valid triangle: a+b > c AND b+c > a AND c+a > b    
9. If the condition is true:
- Calculate s = (a+b+c)/2
- Calculate triangle area using Heron's formula: AT = √[s(s-a)(s-b)(s-c)]
- Display the area of the triangle.
10. Otherwise, display "Enter valid triangle side."
11. Stop.
