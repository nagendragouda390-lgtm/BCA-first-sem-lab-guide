#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,tmp;
    
    clrscr();
    
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);
    
    printf("before : Value of a and b are %d and %d\n",a,b);
    
    tmp = a;
    a = b;
    b = tmp;
    
    printf("after  : Value of a and b are %d and %d\n",a,b);
    
    getch();
}
