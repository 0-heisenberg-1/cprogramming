#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number n: ");
    scanf("%d",&n);
    if(n>=0)
    {
        for(i=n;i<=2*n;i++)
        {
         sum=i+sum;
        }
        printf("The sum is %d",sum);
    }
    else 
    {
        for(i=n;i>=2*n;i--)
        {
            sum=i+sum;

        }
        printf("The sum is %d",sum);
    }
    return 0;
}