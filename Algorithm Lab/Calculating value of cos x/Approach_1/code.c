#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    double x, cos_x;
    
    clrscr();
    
    printf("Enter Angle : ");
    scanf("%lf",&x);
    
    x = x* 3.14159/180;
    
    cos_x = 1 - pow(x,2)/2 + pow(x,4)/24 - pow(x,6)/720 + pow(x,8)/40320;
    
    printf("cos value : %lf \n\n",cos_x);
    
    getch();
}
