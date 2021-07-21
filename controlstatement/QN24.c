// Value of A,B,C,D,N & M must be enterd by the user and display appropriate message if AD-CB=0
#include <stdio.h>
#include <conio.h>
int main()
{
    int A, B, C, D, M, N;
    printf("Enter the values of A,B,C,D,M,N: ");
    scanf("%d%d%d%d%d%d", &A, &B, &C, &D, &M, &N);
    int t1, t2;
    t1 = (10 * A) + D;
    t2 = (10 * C) + B;
    if (t1 - t2 == 0)
    {
        printf("\nThe value of AD-CB is equal zero.");
    }
    else
    {
        printf("\nThe value of AD-CB is not equal to zero. ");
    }
    return 0;
}