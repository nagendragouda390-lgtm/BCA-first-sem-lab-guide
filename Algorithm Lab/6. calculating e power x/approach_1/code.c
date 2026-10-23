#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i;
    float x,res=1,term=1;
    
    clrscr();
    
    printf("Enter value of x : ");
    scanf("%f",&x);
    
    printf("Number of terms : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        term = term*x/i;
        res += term;
    }
    
    printf("\ne^%.2f = %.4f\n",x,res);
    
    getch();
}
        
        
        
        
        
        
        
        
        
