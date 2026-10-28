#include <stdio.h>
#include <conio.h>

void main()
{
  int code;
  char symbol;

  clrscr();

  printf("Enter a character : ");
  scanf("%c",&symbol);

  code = symbol;

  printf("ASCII code of %c is %d.\n",symbol,code);

  getch();
}
