// To find the sum of digit of arbitrary length
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter the number you want to find the sum of its digit: ");
    scanf("%d", &num);
    int rem, i, sum = 0;
    for (i = 0; num > 0; i++)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    printf("\nThe sum of digit of given number is: %d ", sum);
    return 0;
}