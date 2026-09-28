#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int r;
    
    srand(time(0));
    
    clrscr();
    
    r = rand()%10+1;
    
    printf("Random value : %d\n",r);
    
    getch();
}
