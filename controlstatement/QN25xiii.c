// Find the factorial of n
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the number which you want to find factorial of: ");
    scanf("%d", &n);
    int i;
    for (i = 2; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is %d", n, fact);
    return 0;
}