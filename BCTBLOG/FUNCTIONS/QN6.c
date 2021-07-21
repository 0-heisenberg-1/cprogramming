/*WAP to display all the prime numbers within the ranges specified by the users using 
function */
#include <stdio.h>
#include <conio.h>
int prime(int lower, int upper)
{
    int i, prime, j;
    for (i = lower; i <= upper; i++)
    {
        prime = 0;
        for (j = 2; j <= i; j++)
        {
            if (i != j && i % j == 0)
            {
                prime++;
            }
        }
        if (prime == 0 && i != 1)
        {
            printf("\t%d", i);
        }
    }
    return 0;
}
int main()
{
    printf("Enter a range up to which you want to find the prime number of: ");
    printf("\nEnter lower and upper range: ");
    int lower, upper;
    scanf("%d%d", &lower, &upper);
    printf("\nThe prime numbers within %d and %d are:\n ", lower, upper);
    prime(lower, upper);
    return 0;
}