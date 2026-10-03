#include <stdio.h>
#include <string.h>
#include <conio.h>


void main()
{
    char sent[100];
    int i,vow=0,con=0,spe=0;
    
    clrscr();
    
    printf("Enter a sentance : \n");
    scanf("%[^\n]s",sent);
   
    strupr(sent);
        
    for(i=0;sent[i]!='\0';i++)
    {
        if (isalpha(sent[i]))
        {
            if(sent[i]=='A'|| sent[i]== 'E'|| sent[i]=='I'||sent[i]=='O'||sent[i]=='U')
                vow++;
            else
                con++;
        }
        else if(!isdigit(sent[i]))
            spe++;            
    }
    
    printf("\nNumber of vowels     : %2d\n",vow);
    printf("NUmber of consonants : %2d\n",con);
    printf("Special characters   : %2d\n",spe);
    
    getch();
}
            