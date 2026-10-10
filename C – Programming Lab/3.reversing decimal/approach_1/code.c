#include <stdio.h>
#include <conio.h>

void main()
{
  int n,d,rev=0;

  clrscr();

  printf("Enter a number for reversing : ");
  scanf("%d",&n);

  while (n > 0)
  {
    d = n % 10;
    rev = rev * 10 + d;
    n = n / 10;
  }

  printf("Reversed number : %d\n",rev);

  getch();
}
