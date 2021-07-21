// To print multiplication table in this format
//  1   2   3   4   5   6   7   8   9   10
//  2   4   6   8   10  12  14  16  18  20
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("The multiplication table is: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {

        printf("%d\t", i * 2);
    }
    return 0;
}