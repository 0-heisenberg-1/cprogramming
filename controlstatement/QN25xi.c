// To generate the following series and print sum
// 1*4+2*7+3*10+....n terms
#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, f1, f2 = 1, sum = 0;
    printf("Enter the value of nth term up to which you want to find the sum: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f1 = i;
        f2 += 3;
        sum += f1 * f2;
    }
    printf("\n The sum of given series up to %d term is: %d", n, sum);
    return 0;
}