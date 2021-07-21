/*WAp to count and find the sum of all numbers in the array which are exactly divisible by 
7 but not by 5 */
#include <stdio.h>
#include <conio.h>
int sum(int num)
{
    int arr[num];
    printf("\nEnter the numbers: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 7 == 0 && arr[i] % 5 != 0)
        {
            sum += arr[i];
        }
    }
    printf("\nThe sum of numbers in an array which is exactly divisible by 7 & not by 5 is: %d", sum);
    return 0;
}

int main()
{
    int num;
    printf("Enter the count of numbers you want to print: ");
    scanf("%d", &num);
    sum(num);
    return 0;
}