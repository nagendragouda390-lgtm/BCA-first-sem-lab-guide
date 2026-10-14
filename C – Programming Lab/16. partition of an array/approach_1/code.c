#include <stdio.h>
#include <conio.h>

void main()
{
    int a[100],b[100],c[100],mid,i,n;
    
    clrscr();
    
    printf("Size of array : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    mid = n / 2;
    
    for(i=0;i<mid;i++)
        b[i]=a[i];
    
    for(i=mid;i<n;i++)
        c[i]=a[i];
       
    printf("First array : \n[  ");
    for(i=0;i<mid;i++)
        printf("%d  ",b[i]);
    printf("]\nSecond array : \n[  ");
    for(i=mid;i<n;i++)
        printf("%d  ",c[i]);
    printf("]\n");
    
    getch();
}   
       
       
        
