#include <stdio.h>
#include <conio.h>

void main()
{
    int a[100],max,i,n;
    
    clrscr();
    
    printf("Length of array : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    max = a[0];
    
    for(i=1;i<n;i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    
    printf("\nMaximum of array : %d\n",max);
    
    getch();
}
