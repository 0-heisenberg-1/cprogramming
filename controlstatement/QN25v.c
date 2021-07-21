// To read 15 persons age and print maximum ,minimum and average age.
#include <stdio.h>
#include <conio.h>
int main()
{
    int age[15];
    printf("Enter the age of 15 persons: ");
    int i;
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &age[i]);
    }
    int max = age[0], min = age[0];
    double value = 0, avg;
    for (i = 0; i < 15; i++)
    {
        value += age[i];
        if (max < age[i])
            max = age[i];
        else if (min > age[i])
            min = age[i];
    }
    printf("\nThe max age is: %d", max);
    printf("\nThe min age is: %d", min);
    avg = value / 15;
    printf("\nThe average age of given input is: %lf", avg);
    return 0;
}