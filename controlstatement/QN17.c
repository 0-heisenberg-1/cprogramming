// WAP to read the set of real numbers and print the maximum and minimum number with the help of do..while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the count of real numbers you want to enter: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the real numbers: ");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    i = 1;
    do
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
        i++;
    } while (i < n);
    printf("\nThe max number is:%d \n The minimum number is: %d", max, min);
    return 0;
}