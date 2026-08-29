#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i;
    long long fact = 1;
    
    clrscr();
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if (n == 0)
    {
        fact = 1;
    }
    else
    {
        for(i = 1; i <= n;i++)
        {
            fact = fact * i;
        }
    }
    
    printf("Factorial of %d is %d.\n",n,fact);
    
    getch();
} 
