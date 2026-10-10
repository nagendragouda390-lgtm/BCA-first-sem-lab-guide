#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c, large;
    
    clrscr();
    
    printf("Enter 3 numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    
    large = a;
    
    if (b > large)
    {
        large = b;
    }
    if (c > large)
    {
        large = c;
    }
    
    printf("\nLargest of 3 number is %d.\n",large);
    
    getch();
}
