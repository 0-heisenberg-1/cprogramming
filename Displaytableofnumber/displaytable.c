#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the number 'n' which you want to find a table of from 1 to n-1: ");
    scanf("%d",&n);
    printf("\n\n the table of %d is : ",n);
    for(i=1;i<=n-1;i++)
    {
      
      count=n+count;
      printf("\t");
      printf("\n%d |",count);
      printf("\tsquare= %d | ",count*count);
      printf("\tcube=%d ",count*count*count);
    }
    return 0;
}