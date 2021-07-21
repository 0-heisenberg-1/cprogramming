/* WAP to evaluate the following series to n terms specified by the user. Here the factorial and x^y
 must be calculated by recursion.
 x/1!-x^3/3!+x^5/5!-...  */
#include <stdio.h>

float power(float x, float n)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return (x * power(x, n - 1));
    }
}
float fact(float x)
{
    if (x <= 1)
    {
        return 1;
    }
    return (x * fact(x - 1));
}
int main()
{
    float x;
    printf("Enter the value of x to evaluate series: ");
    scanf("%f", &x);
    float value1, v2, v3, v4;
    value1 = (power(x, 1) / fact(1));
    printf("\n%f", value1);
    v2 = (power(x, 3) / fact(3));
    printf("\n%f", v2);
    v3 = (power(x, 5) / fact(5));
    printf("\n%f", v3);
    v4 = value1 - v2 + v3;
    printf("The value of series for x=%d is: %f", x, v4);
    return 0;
}
