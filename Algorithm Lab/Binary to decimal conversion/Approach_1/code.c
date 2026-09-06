#include <stdio.h>
#include <conio.h>

void main()
{
    long long binary; // for big binary numbers
    int dec=0,base = 1,digit;
    
    printf("Enter Binary : ");
    scanf("%lld",&binary);
    
    while (binary != 0)
    {
        digit = binary % 10;
        dec += digit*base;
        base *= 2;
        binary /= 10;
    }
    printf("Decimal value is = %d\n\n",dec);
    
    getch();
}
