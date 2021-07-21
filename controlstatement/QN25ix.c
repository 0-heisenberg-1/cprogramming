// to find binary equivalent of given decimal number
// Step 1: Divide the number by 2(base) through % (modulus operator) and store the remainder in array
// Step 2: Divide the number by 2 through / (division operator)
// Step 3: Repeat the step 2 until number is greater than 0
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int dec;
    printf("Enter the decimal number to find its equivalent number: ");
    scanf("%d", &dec);
    int bin[16], i;
    for (i = 0; dec > 0; i++)
    {
        bin[i] = dec % 2;
        dec = dec / 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("\t%d", bin[i]);
    }

    // similar for conversion of binary to decimal
    int rem, binary, decimal = 0;
    printf("\nEnter the binary number that you want to convert to decimal: ");
    scanf("%d", &binary);
    int num = binary;
    for (i = 0; binary > 0; i++)
    {
        rem = binary % 10;
        binary = binary / 10;
        decimal += rem * pow(2, i);
    }
    printf("\nThe decimal equivalent of %d binary is: %d", num, decimal);
    return 0;
}