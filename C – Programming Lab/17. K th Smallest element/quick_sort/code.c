#include <stdio.h>
#include <conio.h>

int a[10],pivot,k;

void swap(int i ,int j);
void smallest(int low,int high);
int partition(int low, int high);

void main()
{
    int n,i;
    
    clrscr();
    
    printf("Size of array : ");
    scanf("%d",&n);
    
    printf("Enter %d elements : \n",n);
    for(i=1; i <= n; i++)
        scanf("%d",&a[i]);
    
    printf("K th smallest you want : ");
    scanf("%d",&k);
    
    smallest(1,n);
    
    getch();
}

void smallest(int low, int high)
{
    int j;
    if(low < high)
    {
        j = partition(low,high+1);
        if(j == k)
            printf("k th smallest element : %d\n",a[j]);
        if (j > k)
            smallest(low,j-1);
        else
            smallest(j+1,high);
    }
}

int partition(int low, int high)
{
    int i,j;
    
    pivot = a[low];
    i = low;
    j = high;
    
    do
    {
        do
        {
            i++;
        } while(pivot >= a[i]);
        do
        {
            j--;
        } while(pivot < a[j]);
        if(i < j)
            swap(i,j);
    } while(i < j);
    a[low] = a[j];
    a[j] = pivot;
    return j;
}

void swap(int i, int j)
{
    int p = a[i];
    a[i] = a[j];
    a[j] = p;
}
        
        
                

