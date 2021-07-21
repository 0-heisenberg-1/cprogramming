// WAP to read an integer from keyboard and add 1 to it if it is even and again 1 to it if the number is less than 20.
// otherwise keep the number unchanged
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter the count of numbers you want to enter: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the numbers: ");
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe numbers entered are: ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
        if (arr[i] % 2 == 0 && arr[i] < 20)
            arr[i] += 2;
        else if (arr[i] < 20)
            arr[i]++;
        else if (arr[i] % 2 == 0)
            arr[i]++;
    }
    printf("\nThe numbers after operation are: ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    return 0;
}