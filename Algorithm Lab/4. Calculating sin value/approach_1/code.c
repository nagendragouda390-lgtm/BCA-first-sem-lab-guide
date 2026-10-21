#include <stdio.h>
#include <conio.h>
#include <math.h>                                                                                        

void main()
{
    float x,sin;
    
    clrscr();
    
    printf("Enter angle in degrees : ");
    scanf("%f",&x);
    
    x = x*3.142/180; // Converting degree to radian
    
    sin = x - pow(x,3)/6 + pow(x,5)/120 - pow(x,7)/5040; // Tailor series
    
    printf("sin value = %.2f",sin);
    
    getch();
    
}
 
