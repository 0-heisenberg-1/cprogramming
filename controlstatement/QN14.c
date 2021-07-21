//QN 12  & QN 13 series not given
//  WAP to find the sum of reciprocal of numbers entered by user untill user enters zero and display the sum.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter the count of numbers you want to enter: ");
    int n;
    scanf("%d", &n);
    float arr[n];
    printf("\nEnter the numbers: ");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    printf("\nThe numbers untill 0 is: ");
    float sum = 0;
    for (i = 0; arr[i] != 0; i++)
    {
        printf("\t%f", arr[i]);
        sum += 1 / arr[i];
    }
    printf("\nThe sum of reciprocal untill 0 encountered is: %f", sum);
    return 0;
}