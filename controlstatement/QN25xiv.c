// To print 50 prime numbers
// steps:
// Input upper limit to print prime numbers from user. Store it in some variable say end.
// Run a loop from 2 to end, increment 1 in each iteration. The loop structure should be like for(i=2; i<=end; i++).
// Inside the loop for each iteration print value of i if it is prime number.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j, prime;
    printf("Enter the number up to which you want to find the prime number of: \n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
            printf("\t%d", i);
    }
    return 0;
}