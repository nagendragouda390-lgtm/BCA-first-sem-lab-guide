#include <stdio.h>
#include <conio.h>

void main()
{
    int a[100],n,i,j,k;
    
    printf("Size of array : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                j--;
                n--;
            }
        }
    }
    
    printf("\n\nFinal : \n[  ");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    printf("]\n");   
}
