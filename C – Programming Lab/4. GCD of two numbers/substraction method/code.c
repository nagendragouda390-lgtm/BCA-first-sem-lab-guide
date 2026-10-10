#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    
    clrscr();
    
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    
    while(a != b)
    {
        if (a>b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    
    printf("\n GCD : %d \n",a);
    
    getch();
}
