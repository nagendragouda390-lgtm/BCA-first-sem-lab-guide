/*
IGNORE COMMENTS WHILE PRACTICING.

Constant:
    PI = defined after link section
    
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

#define PI 3.143

void main()
{
    float r, a, b, c, AC, s, AT;
    
    clrscr(); // To erase old outputs
    
    printf("Radius of circle  : ");
    scanf("%f",&r);
    
    printf("Sides of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    
    AC = PI * r * r; // PI is defined before main function
    
    printf("\nArea of circle   : %.2f sq.units\n",AC);
    
    if (a+b>c && b+c>a && c+a>b)
    {
        s = (a+b+c)/2;
    
        AT = sqrt(s*(s-a)*(s-b)*(s-c));
    
        printf("\nArea of triangle : %.2f sq.units\n",AT);
    }
    else
    {
        printf("\nEnter valid triangle side.");
    }
    
    getch(); // It show output until you enter a character
    
}
