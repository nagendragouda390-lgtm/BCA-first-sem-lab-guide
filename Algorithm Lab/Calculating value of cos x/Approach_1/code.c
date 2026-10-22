#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float x, cos_x;
    
    clrscr();
    
    printf("Enter Angle : ");
    scanf("%f",&x);
    
    x = x* 3.14159/180;
    
    cos_x = 1 - pow(x,2)/2 + pow(x,4)/24 - pow(x,6)/720;
    
    printf("cos value : %f \n\n",cos_x);
    
    getch();
}
