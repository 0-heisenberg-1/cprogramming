//WAP to read any number x and evaluate x^2-2. Use function to evaluate x^2-2 and call this function through pointer.
// 11.	Wnte a program to read any number x & to evaluate x -2. Use a function to evaluate x^2-2. Call this fimction through its pointer.

#include <stdio.h>
#include <conio.h>
int value(int *ptr)
{
    *ptr = ((*ptr) * (*ptr)) - 2;
    return (*ptr);
}
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("\nThe value is: %d", value(&x));
    return 0;
}
