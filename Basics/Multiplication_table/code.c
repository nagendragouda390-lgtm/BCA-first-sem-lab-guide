#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;

    clrscr();
    
    for(i=1;i<=20;i++)
    {
        printf("%d th series:\n\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%2d x %2d = %3d\n",i,j,i*j);
        }
        printf("\n\n");
    }
    getch();
}
