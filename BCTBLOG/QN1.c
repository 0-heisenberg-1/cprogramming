/*Write a function that takes an integer number of any digits and return the number 
reversed.IN the calling function read a number pass it to the function and display the 
result. */
#include <stdio.h>
#include <conio.h>
int rev(int n)
{
    int temp = n, rev = 0, rem;
    for (int i = 0; temp > 0; i++)
    {
        rem = temp % 10;
        rev = rem + rev * 10;
        temp = temp / 10;
    }
    return (rev);
}
int main()
{
    int n;
    printf("Enter a no which you want to find reverse of: ");
    scanf("%d", &n);
    printf("\nThe reversed number is: %d", rev(n));
    return 0;
}
