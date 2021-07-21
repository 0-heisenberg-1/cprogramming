// TO find octal equivalent when the decimal number is given
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int originaldecimal, i, decimal, octal[16];
    printf("Enter the decimal number that you want to find octal equivalent of: ");
    scanf("%d", &decimal);
    originaldecimal = decimal;
    for (i = 0; decimal > 0; i++)
    {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
    }
    printf("\nThe octal equivalent of %d decimal is: ", originaldecimal);
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", octal[i]);
    }
    return 0;
}