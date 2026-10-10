/*
IGNORE COMMENTS WHILE PRACTICING.

variables:
    r = radius of circle
    a,b,c = sides of triangle
    s = half of sum of tringle sides
    AC = area of circle
    AT = area of triangle
    
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float r, a, b, c, AC, s, AT;
    
    clrscr(); // To erase old outputs
    
    printf("Radius of circle  : ");
    scanf("%f",&r);
    
    printf("Sides of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    
    AC = 3.143 * r * r; // 3.143 is value of PI
    
    s = (a+b+c)/2;
    
    AT = sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("Area of circle   : %f \n",AC);
    printf("Area of triangle : %f \n",AT);
    
    getch(); // It show output until you enter a character
    
}
