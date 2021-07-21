/*1.WAP to read a number and call a function till “yes” is entered by the user. You should count 
and sum the numbers using static variables in the function and return the average to the main 
function. */
#include <stdio.h>
#include <conio.h>
#include <string.h>
int fun(int x)
{
    int i, arr[20];
    printf("Enter the numbers: ");
    for (i = 0; i < 15; i++)
    {
        scanf("%d", &arr[i]);
        if ((scanf("%d", &arr[i]) != 1))
        {
            scanf("% *s");
        }
    }
    return 0;
}