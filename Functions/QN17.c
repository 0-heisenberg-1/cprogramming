// 17.	Write a program to swap two numbers using function
#include <stdio.h>
int swap(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nThe value of a=%d\nThe value of b=%d", a, b);
    swap(a, b);
    return 0;
}
int swap(int a, int b)
{
    // // without using third variable                             with using third variable
    // a = a + b;                                                     int c;
    // b = a - b;                                                     c=a;
    // a = a - b;                                                     b=a;
    // printf("\n\nThe numbers swaped is a=%d & b=%d", a, b);         a=c;
    return 0;
}