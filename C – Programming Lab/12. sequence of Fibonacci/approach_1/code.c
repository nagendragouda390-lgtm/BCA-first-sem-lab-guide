#include <stdio.h>
#include <conio.h>

void main()
{
    int n,a=0,b=1,c,i;
    
    clrscr();
    
    printf("Enter number of terms : ");
    scanf("%d",&n);

    printf("Fibonacci sequence : 0  1  ");
    for (i = 3;i<=n ;i++)
    {
        c = a + b;
        printf("%d. ",c);
        a = b;
        b = c;
    }
    getch();
}
