#include <stdio.h>
#include <conio.h>

void main()
{
    int nums[100],n,i;

    clrscr();

    printf("No of elements : ");
    scanf("%d",&n);

    for(i=0; i < n ; i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&nums[i]);
    }
  
    printf("Reversed arrray : ");
    for(i=n-1; i >= 0; i--)
    {
        printf("%3d\t",nums[i]);
    }

    getch();
}
