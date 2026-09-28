#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,n;
    
    clrscr();
    
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(i=2;i <= n; i++)
    {
        for(j=2;j < i;j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            printf("%d\t",i);
    }

    getch();
}
