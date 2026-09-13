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


void addition(int r1, int c1, int a[10][10],int b[10][10],int add[10][10])
{
    int i, j;
    
    for(i=0 ; i < r1; i++)
    {
        for(j=0; j < c1; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
}

void substraction(int r1, int c1, int a[10][10],int b[10][10],int sub[10][10])
{
    int i, j;
    
    for(i=0 ; i < r1; i++)
    {
        for(j=0; j < c1; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
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
    int a[10][10],b[10][10],m[10][10],add[10][10],sub[10][10],r1,c1,r2,c2,i,j,k;
    
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
        
        if (r1 == r2 && c1 == c2)
        {
            addition(r1,c1,a,b,add);
            
            printf("\n\n\n Matrix A + B :\n");
            
            display(r1,c1,add);
            
            substraction(r1,c1,a,b,sub);
            
            printf("\n\n\n Matrix A - B :\n");
            
            display(r1,c1,sub);
        }
    }
    else
    {
        if (r1 == r2 && c1 == c2)
        {
            printf("\n\nEnter %d elements : \n",r1*c1); 
            input(r1,c1,a);  // Input for A matrix
           
            printf("\n\nEnter %d elements : \n",r2*c2);
            input(r2,c2,b);  // Input for B matrix
            
            printf("\n\n\n Matrix A : \n");  // Display A matrix
        
            display(r1,c1,a);
        
            printf("\n\n\n Matrix B :\n");
         
            display(r2,c2,b); //Display B matrix
            addition(r1,c1,a,b,add);
            
            printf("\n\n\n Matrix A + B :\n");
            
            display(r1,c1,add);
            
            substraction(r1,c1,a,b,sub);
            
            printf("\n\n\n Matrix A - B :\n");
            
            display(r1,c1,sub);
        }
        
        
        printf("\n\nWarning:\n\nMatrix of this order can't be multipled:\n");
        printf("Condition:\n  columns of first matrix should be equals to rows of second matrix.\n");
        printf("\n A(2,3) * B(3,2) = C(2,2) It is right method\n");
        printf("\n A(2,3) * B(2,3) This is invalid matrix to multiply.\n");
    }
    
    getch();
    
}
        
    
    
    
    
    
