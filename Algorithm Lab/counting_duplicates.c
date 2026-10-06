// COunting duplicates from an array
#include <stdio.h>
#include <conio.h>

void main()
{
    int a[100],n,i,j,k,count,copied;
    
    clrscr();
    
    printf("Size of array : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        count = 1, copied=0;
        
        for(j=0;j<i;j++)
        {
            if (a[j]==a[i])
            {
                copied = 1;
            }
        }
        if(copied == 0)
        {
            for(k=i+1;k<n;k++)
            {
                if (a[k] == a[i])
                    count++;
            }
            
            if (count > 1)
                printf("\n%d repeated %d times.\n",a[i],count);
        }
    }
    
    getch();
}
        
        
            
        
    

