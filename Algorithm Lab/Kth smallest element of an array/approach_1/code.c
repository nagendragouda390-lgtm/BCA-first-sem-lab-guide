// kth smallest element
#include <stdio.h>
#include <conio.h>

void main()
{
    int a[100],n,i,j,k,tmp;
    
    clrscr();
    
    printf("Size of array : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("kth smallest element you want : ");
    scanf("%d",&k);
    
    for(i=0;i< n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    
    printf("%d th smallest element is %d\n",k,a[k-1]);
    
    getch();
}

