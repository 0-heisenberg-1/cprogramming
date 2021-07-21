// WAP to dispaly the table of numbers ,its sqares numbers and its cubes values from 1 to n-1,where n is any number typed by user in terminal
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, value;
    printf("Enter the number which you want to find table of: ");
    scanf("%d", &n);
    printf("\nTable\tSquare\tcubes");
    for (i = 1; i < n; i++)
    {
        value = i * n;
        // for table
        printf("\n%d", value);
        // for square
        printf("\t%d", value * value);
        // for cube
        printf("\t%d", value * value * value);
    }
    return 0;
}