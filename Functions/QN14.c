// 14.	Write a program which has three user-defined functions named readData(), processData() and displayData(). Use readData()
//  function to read two fractional numbers from keyboard, processData()
//  function sum these numbers and displayData() function display the sum.
#include <stdio.h>
#include <conio.h>
double a, b;
double read_data()
{
    printf("Enter two fractional number: ");
    scanf("%lf%lf", &a, &b);
    return 0;
}
double process_data()
{
    double sum;
    sum = a + b;
    return sum;
}
int display_data()
{
    printf("\nThe sum of two fractional number is: %lf ", process_data());
}
int main()
{

    read_data();
    process_data();
    display_data();
    return 0;
}