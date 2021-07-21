// 13.	To check whether a positive integer greater than 3 is twin prime or not?
// A prime number is twin prime if the resulting number after altering( plus or minus) it by 2
// also a prime number. Ex 29 is twin prime because itself is prime and
//  29+2=31 is also prime number and 53 is not twin prime because 53 is prime but neither 51 nor 55 is prime.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int twin_prime(int x)
{
    if (x <= 3)
    {
        printf("\nEnter the value of x greater than 3.");
    }
    int a, count = 0;
    for (int i = 2; i < (x - 1); i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        a = 1;
    }
    else
    {
        a = 0;
    }
    return (a);
}

int main()
{
    int check, num;
    printf("Enter the positive integer greater than 3 to check whether it is prime number or not:\n ");
    scanf("%d", &num);
    check = twin_prime(num);
    if (check == 1)
    {
        printf("%d is a prime number.", num);
    }
    else
    {
        printf("%d is not a prime number.", num);
        exit(1);
    }
    int a, b;
    a = num + 2;
    b = num - 2;
    if (twin_prime(a) == 1 || twin_prime(b) == 1)
    {
        printf(" \n%d is a twin prime number.", num);
    }
    else
        printf("\n %d is not a twin prime number.", num);
    return 0;
}