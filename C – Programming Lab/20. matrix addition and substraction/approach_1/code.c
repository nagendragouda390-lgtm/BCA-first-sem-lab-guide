#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int add[10][10],sub[10][10],m,n,o,p,i,j;

void display(int a[10][10]);
void read(int a[10][10]);
void add_sub(int a[10][10],int[10][10]);

void main()
{
    int a[10][10], b[10][10];
    
    printf("Order of first matrix  : ");
    scanf("%d%d",&m,&n);
    
    printf("Order of Second matrix : ");
    scanf("%d%d",&o,&p);
    
    if((m != o)||(n != p))
    {
        printf("Invalid order of matrix for addition and substraction.\n");
        exit(0);
    }
    
    printf("\nEnter %d elements for first matrix  : ",m*n);
    read(a);
    
    printf("Enter %d elements for second matrix : ",o*p);
    read(b);
    
    add_sub(a,b);
    
    printf("\nfirst matrix : \n");
    display(a);
    
    printf("\nSecond matrix : \n");
    display(b);
    
    printf("\nSum : \n");
    display(add);
    
    printf("\nSub : \n");
    display(sub);
    
    getch();
}

void display(int a[10][10])
{
    for(i = 0; i < m; i++)
    {
        printf("\t[  ");
        for(j=0;j<n;j++)
        {
            printf("%4d  ",a[i][j]);
        }
        printf("]\n");
    }
}

void read(int a[10][10])
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
}

void add_sub(int a[10][10], int b[10][10])
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
}
    
    
    
