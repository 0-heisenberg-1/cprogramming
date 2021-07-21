// To print all three armstrong number : three means lies in between 100 to 1000.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("The three digit armstrong numbers are: \n");
    int rem, sum, i, j;
    for (i = 1; i < 1000; i++)
    {
        int rem, temp;
        temp = i;
        sum = 0;
        for (j = 1; temp > 0; j++)
        {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("\t%d", sum);
        }
    }
    return 0;
}