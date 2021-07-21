// WAP to find the sum of the following series using a function declaration
// sum=x-(x^3)/3!+(x^5)/5!-(x^7)/7!+....-(x^n)/n!
#include <stdio.h>
#include <conio.h>
double sum(double);
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    float nx = x;
    int i;
    printf("\nThe sum of %d in given series is: %lf", x, sum(nx));
    return 0;
}
double sum(double x)
{
    double temp = x, add = x;
    int i;
    for (i = 2; i <= 8; i += 2)
    {
        temp = ((-1) * temp * x * x) / (i * (i + 1));
        add += temp;
    }
    return (add);
}