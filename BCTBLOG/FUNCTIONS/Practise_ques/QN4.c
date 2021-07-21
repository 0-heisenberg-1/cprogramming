/* WAP to find  ∑(n^2) using recursion.  ∑(n^2)=1^2+2^2+3^2+...nth terms. */
#include <stdio.h>
int sigma(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return (n * n + sigma(n - 1));
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\nThe value of  ∑ of n=%d is: %d", n, sigma(n));
    return 0;
}