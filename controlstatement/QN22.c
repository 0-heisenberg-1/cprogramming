// WAP to find the sum and average of given numbers using do...while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the count of numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nenter the numbers: ");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    i = 0;
    do
    {
        sum += arr[i];
        i++;
    } while (i < n);
    double value, avg;
    value = sum;
    avg = value / n;
    printf("\nThe sum of given numbers is %d\nThe average of the given numbers:%lf", sum, avg);
    return 0;
}