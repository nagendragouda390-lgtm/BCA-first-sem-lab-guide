#include <stdio.h>
#include <conio.h>

void main()
{
    int i, count = 0,total = 0;
    
    clrscr();
    
    for (i = 100; i <= 200; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d \n",i);
            count++;
            total = total + i;
        }
    }
    printf("Total numbers divisible by 7  : %d\n\n",count);
    printf("Sum of numbers divisible by 7 : %d\n",total);
    
    getch();
}
