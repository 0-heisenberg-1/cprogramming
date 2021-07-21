/*WAP to print the Fibonacci series until the term is less than 500 using recursive function. 
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int fibo(int a, int b)
{
    if (a < 500)
    {
        printf("\t%d", a);
        fibo(b, a + b);
    }
    else
        exit(0);
    return 0;
}

int main()
{
    printf("The fibonacci series untill term is less than 500: \n ");
    fibo(0, 1);
    return 0;
}
