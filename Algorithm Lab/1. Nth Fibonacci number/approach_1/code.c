#include <stdio.h>
#include <conio.h>

void main()
{
    int n,a=0,b=1,c,i;
    
    clrscr(); 
    
    printf("Nth fibonacci number you want : ");
    scanf("%d",&n);

    for (i=3;i<=n;i++)
    {
            c = a+b;
            a = b;
            b = c;
    }
    printf("%d th fibonacci number is %d\n",n,b);
    
    getch();
}


