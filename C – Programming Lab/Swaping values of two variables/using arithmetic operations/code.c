#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    
    clrscr();
    
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    
    printf("before : Value of a and b are %d and %d\n",a,b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("after  : Value of a and b are %d and %d\n",a,b);
    
    getch();
}
