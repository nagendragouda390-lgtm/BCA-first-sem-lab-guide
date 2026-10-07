#include <stdio.h>
#include <conio.h>

int is_prime(int a)
{
    int i;
    
    for(i=2;i<=a/2;i++)
    {
        if(a % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int n,i;
    
    clrscr();
    
    printf("Enter limit : ");
    scanf("%d",&n);
    
    printf("Prime numbers upto %d : \n",n);
    
    for(i=2;i<=n;i++)
    {
        if(is_prime(i))
        {
            printf("%d\t",i);
        }
    }
    getch();
}