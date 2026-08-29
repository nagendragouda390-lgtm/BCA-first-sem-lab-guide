#include <stdio.h>
#include <conio.h>

void main()
{
    int a;
    
    clrscr();
    
    printf("Enter a number : ");
    scanf("%d",&a);
    
    if (a % 2 == 0)
    {
        printf("%d is an even number. \n",a);
    }
    else
    {
        printf("%d is an odd number. \n",a);
    }
    
    getch();
}

  
