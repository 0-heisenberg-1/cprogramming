// 18.	Write a program to calculate the n Fibonacci numbers using a function. Also using recursive function.
#include <stdio.h>
#include <conio.h>
int fibo(int n)
{
    if (n <= 1)
        return n;
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter the value of n in which you want to find the fibonacci number: ");
    scanf("%d", &n);
    printf("\n%d", fibo(n));
    return 0;
}
