#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i=2;
    
    clrscr();
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    printf("\nPrime factors : ");
    while (n > 1)
    {
        if (n % i == 0)
        {
            printf("%d\t",i);
            n /= i;
        }
        else
            i++;
    }
    
    getch();
}
