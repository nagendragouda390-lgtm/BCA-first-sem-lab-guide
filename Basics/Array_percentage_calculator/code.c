#include <stdio.h>
#include <conio.h>

void main()
{
    int marks[4],sum=0;
    float perc;

    clrscr();
   
    for(int i=0; i<4; i++)
    {
        printf("Subject %d : ",i+1);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    
    perc = (float)sum*100/400;
    
    printf("Percentage : %.2f.\n\n",perc);

    getch();
}



