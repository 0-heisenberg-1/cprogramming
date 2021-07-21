// 16.	Write a program using function to check whether a given number is prime or not?
#include <stdio.h>
#include <conio.h>
int checkprime(int a)
{
    int count = 0;
    int temp = a;
    for (int i = 2; i < (temp - 1); i++)
    {
        if (temp % i == 0)
        {
            count++;
            break;
        }
        else if (temp % i != 0)
        {
            count = 0;
        }
    }
    if (count == 0)
        printf("\n%d is a prime number.", a);
    else
        printf("\n%d is not a prime number.", a);
    return 0;
}
int main()
{
    int num;
    printf("Enter the number to check prime or not");
    scanf("%d", &num);
    checkprime(num);
    return 0;
}