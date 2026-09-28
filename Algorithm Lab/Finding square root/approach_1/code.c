#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float g1,g2,m,error=0.00001;
    
    clrscr();
    
    printf("Enter number : ");
    scanf("%f",&m);
    
    g2 = m / 2.0;
    
    do
    {
        g1 = g2;
        g2 = (g1 + m/g1)/2.0;
        
    } while(fabs(g1-g2)>error);
    
    printf("SQRT of %.2f : %.2f",m,g2);
    
    getch();
}
