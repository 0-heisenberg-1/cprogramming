// Sum of the series for given integer x:
// 1+x^2+X^3+x^4+....up to term <999999
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, x, sum = 1;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int temp = x;
    do
    {
        temp *= x;

        if (temp < 99999)
        {
            printf("\t%d", temp);
            sum += temp;
        }
    } while (temp < 99999);
    printf("\nThe sum of series is: %d", sum);
    return 0;
}