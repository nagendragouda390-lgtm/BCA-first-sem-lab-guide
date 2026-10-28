#include <stdio.h>
#include <conio.h>

void main()
{
  int a,b;

  clrscr();

  printf("Enter two numbers : ");
  scanf("%d%d",&a,&b);

  while (a != b)
  {
    if (a > b)
      a -= b;
    else
      b -= a;
  }

  printf("GCD = %d",a);

  getch();
}
