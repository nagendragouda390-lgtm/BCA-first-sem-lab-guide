#include <stdio.h>
#include <conio.h>

void main()
{
  int i,j,k;

  clrscr();

  for(i=1 ; i <= 4 ; i++)
  {
    for(j = 4 ; j >= i ; j--)
    {
      printf("\t");
    }
    for(k = 1; k <= i; k ++)
    {
      printf("*\t");
    }
    printf("\n");
  }
  getch();
}

