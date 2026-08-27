#include <stdio.h>

int fib(int a){
    if (a == 1)
    {
        return 0;
    }
    else if (a==2)
    {
        return 1;
    } 
       
    return fib(a-1)+fib(a-2);
}

int main(){
    int a;
    
    printf("Nth fibonacci number you want : ");
    scanf("%d",&a);
    
    printf("\n%d th fibonacci : %d\n",a,fib(a));
}


