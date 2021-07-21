// WAP to find the unknown values of linear equation
//   Ax+By=M
//   Cx+Dy=N
#include <stdio.h>
#include <conio.h>
int main()
{
    double A, B, C, M, D, N;
    printf("Enter the values of A,B,C,D,M,N: ");
    scanf("%lf%lf%lf%lf%lf%lf", &A, &B, &C, &D, &M, &N);
    double x, y;
    x = ((M / A) - (B / A) * (N / D)) / (1 - (B / A) * (C / D));
    y = (N / D) - ((C / D) * x);
    printf("The value of x and y from given equation is: %lf \t %lf", x, y);
    return 0;
}