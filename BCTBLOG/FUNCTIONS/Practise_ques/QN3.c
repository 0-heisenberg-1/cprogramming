/* 3.WAP to read integer number and add the individual digits contained in it until the final sum is 
a single digit. Use recursion to do so. */
#include <stdio.h>
int rec(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
        return ((n % 10) + rec(n / 10));
}
int main()
{
    int n;
    printf("Enter a nbumber: ");
    scanf("%d", &n);
    printf("The sum of individual digits of %d is: %d", n, rec(n));
    return 0;
}