/*2.WAP to find the sum of digits of an integer recursively*/
#include <stdio.h>
int rec(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return ((n % 10) + (rec(n / 10)));
    }
}
int main()
{
    int n, sum;
    printf("Enter the digits: ");
    scanf("%d", &n);
    sum = rec(n);
    printf("\n The sum of digits of %d is: %d", n, sum);
    return 0;
}