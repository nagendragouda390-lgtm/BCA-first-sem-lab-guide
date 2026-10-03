#include <stdio.h>
#include <conio.h>

void main()
{
        int a[100],i,j,n;
        
        clrscr();
        
        printf("Size of array : ");
        scanf("%d",&n);
        // Reading values for arrray
        for(i=0;i<n;i++)
        {
            printf("Element %d : ",i+1);
            scanf("%d",&a[i]);
        }
        // Removing duplicates
        
        j=0;
        
        for(i=1;i<n;i++)
        {
            if (a[i] != a[j])
            {
                j++;
                a[j]=a[i];
            }
        }
        
        j++;
        // Displaying final array
        printf("\nArray after removing duplicates : [  ");
        for(i=0;i<j;i++)
        {
            printf("%d  ",a[i]);
        }
        printf("]\n");
        
        getch();
}
        
           
        
        
