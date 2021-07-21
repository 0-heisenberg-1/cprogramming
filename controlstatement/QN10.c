// WAP to count the odd and even number entered by the user.Your program must read numbers untill the user enters 0, after user
// enters 0 display the count.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter the count of numbers you want to check for odd and even: ");
    int num;
    scanf("%d", &num);
    int i, Arr[num];
    printf("Enter all the numbers that you want to calculate odd and even numbers up to 0: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &Arr[i]);
    }
    printf("The numbers entered up to 0 are: ");
    int odd = 0, even = 0;
    for (i = 0; Arr[i] != 0; i++)
    {
        printf("\t%d", Arr[i]);
        if (Arr[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("\nThe odd numbers are:%d \n The even numbers entered are:%d", odd, even);
    return 0;
}