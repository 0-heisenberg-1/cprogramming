// WAP to determine whether a given number is armstrong number or not
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number to check armstrong or not: ");
    scanf("%d", &n);
    int check, rem, sum = 0;
    check = n;
    int i;
    for (i = 0; check > 0; i++)
    {
        rem = check % 10;
        sum += rem * rem * rem;
        check = check / 10;
    }
    if (sum == n)
        printf("%d is a armstrong number.", n);
    else
        printf("%d is not an armstrong number.", n);
    return 0;
}