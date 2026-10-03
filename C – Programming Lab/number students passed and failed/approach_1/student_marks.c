#include <stdio.h>
#include <conio.h>

void main()
{
    int m[100],n,i,pass=0,fail=0;
    
    clrscr();
    // Read value for number of students
    printf("Number of students : ");
    scanf("%d",&n);
    // Read value for marks
    for(i=0;i<n;i++)
    {
        printf("Student %d marks : ",i+1);
        scanf("%d",&m[i]);
        
        if(m[i]>=35)
            pass++;
        else
            fail++;
    }
    //Displaying number of students passed and failed
    printf("\nNo. of students passed : %d",pass);
    printf("\nNo. of students failed : %d",fail);
    
    getch();
}
    
