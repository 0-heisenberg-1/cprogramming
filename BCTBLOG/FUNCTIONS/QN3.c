/*WAP to print the Fibonacci series up to n using recursive function. */
#include <stdio.h>
#include <conio.h>
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter the nth term up to which you want to find fibonacci number: ");
    scanf("%d", &n);
    printf("\nThe fibonacci series is:\n ");
    if (n == 0)
    {
        printf("\t%d", n);
    }
    else if (n == 1)
    {
        printf("\t%d", n);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", fibo(i));
    }
    return 0;
}