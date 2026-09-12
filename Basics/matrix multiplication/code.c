/*

MATRIX MULTIPLICATION:

consider a matrix A of order m x n.
consider another matrix of order p x q.

i.e. A(m x n) B( p x q)

To multiply two matrix  n == m must be True.

And the multiplied matrix will be in order of m x q.

EX:

a = [[0,1],    b = [[4,5],
     [2,3]]         [6,7]]

c = a * b = [[(0*4+1*6), (0*5+1*7)], = [[ 6, 7],
             [(2*4+3*6), (2*5+3*7)]]    [26,31]]

c[0,0] = a[0,0]*b[0,0] + a[0,1]*b[1,0]
c[0,1] = a[0,0]*b[0,1] + a[0,1]*b[1,1]

c[1,0] = a[1,0]*b[0,0] + a[1,1]*b[1,0]
c[1,1] = a[1,0]*b[0,1] + a[1,1]*b[1,1]

c[i,j] = c[i,j] + (a[i,k]*b[k,j]) # Note this

so we need 3 loops.

In first loop we will control rows of c(result)
In second loop we will control columns of c.
In third loop we will cotrol rows of b

Structure of loops:

i(0 to r1-1)
    j(0 to c2-1)
        k(0 to r2-1)

NO of iterations  for a= 2,2 and b= 3,3:

    2 * 2 * 2 = 8 iterations. 

    2 iterations for a single index.



*/


#include <stdio.h>
#include <conio.h>

void display(int a,int b, int arr[10][10])
{
    int p,q;
    
    for(p = 0; p < a; p++)
    {
        printf("\t[");
        for(q = 0; q < b; q++)
        {
            printf("  %3d  ",arr[p][q]);
        }
        printf("]\n");
    }
}

void multiplication(int r1, int r2, int c1, int c2,int a[10][10], int b[10][10],int c[10][10])
{
    int i,j,k;
    
    for(i=0; i<r1;i++)
    {
        for(j=0; j< c2;j++)
        {
            for(k=0;k<r2;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
            
void input(int r1,int c1, int a[10][10])
{
    int i,j;
    
    for(i=0; i< r1;i++)
    {
        printf("\nROW %d:\n",i+1);
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
}    
    
void main()
{
    int a[10][10],b[10][10],m[10][10],r1,c1,r2,c2,i,j,k;
    
    clrscr();
    
    printf("\nEnter order of first matrix  : ");
    scanf("%d%d",&r1,&c1);
    
    printf("\nEnter order of second matrix : ");
    scanf("%d%d",&r2,&c2);
    
    if (c1 == r2)
    {
        printf("\n\nEnter %d elements : \n",r1*c1); 
        input(r1,c1,a);  // Input for A matrix
        
        printf("\n\nEnter %d elements : \n",r2*c2);
        input(r2,c2,b);  // Input for B matrix
                
        multiplication(r1,r2,c1,c2,a,b,m);  // Multiplication
        
        printf("\n\n\n Matrix A : \n");  // Display A matrix
        
        display(r1,c1,a);
        
        printf("\n\n\n Matrix B :\n");
        
        display(r2,c2,b); //Display B matrix
        
        printf("\n\n\n Matrix A * B :\n");
        
        display(r1,c2,m);  // Diplay M matrix
    }
    else
    {
        printf("\nWarning:\n\nMatrix of this order can't be multipled:\n");
        printf("Condition:\n  columns of first matrix should be equals to rows of second matrix.\n");
        printf("\n A(2,3) * B(3,2) = C(2,2) It is right method\n");
        printf("\n A(2,3) * B(2,3) This is invalid matrix to multiply.\n");
    }
    
    getch();
    
}
  
