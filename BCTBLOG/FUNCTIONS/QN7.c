/*WAP to find x^n using recursive function */
#include <stdio.h>
int power(int, int);
int main()
{
    printf("Enter a value of x: ");
    int x, n;
    scanf("%d", &x);
    printf("\nEnter a value of n:  ");
    scanf("%d", &n);
    printf("The value of %d power %d is: %d ", x, n, power(x, n));
}
int power(int x, int n)
{
    if (n < 1)
        return 1;
    else
    {
        return (x * power(x, n - 1));
    }
}