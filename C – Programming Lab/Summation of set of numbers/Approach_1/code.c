#include <stdio.h>
#include <conio.h>

void main()
{
    int lim,nums[100],i,sum=0;
    
    clrscr();
    
    printf("Total numbers : ");
    scanf("%d",&lim);
    
    printf("\n\n");
    
    for(i=0 ; i < lim ; i++)
    {
        printf("Number %2d : ",i+1);
        scanf("%d",&nums[i]);
        sum += nums[i];
    }
    
    printf("\n\nSum of given numbers : %d\n",sum);
    
    getch();
}
