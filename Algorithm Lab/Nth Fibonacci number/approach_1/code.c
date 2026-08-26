/*
Fibonacci Series:

Variable:
    n = input
    a = first number
    b = second number
    c = third number
    i = for for loop
*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int n,a=0,b=1,c,i;
    
    clrscr(); // clear old output
    
    printf("Nth fibonacci number you want : ");
    scanf("%d",&n);
    
    if (n == 1)
    {
        printf("First fibanacci number is 0.\n");
    }
    else if (n == 2)
    {
        printf("Second fibonacci number is 1.\n");
    }
    else
    {
        for (i=3;i<=n;i++)
        {
            c = a+b;
            a = b;
            b = c;
        }
        printf("%d th fibonacci number is %d.\n",n,b);
    }
    getch();
}


