// to read any integer and print its multiplication table
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter the number you want to find multiplication table of: \n");
    scanf("%d", &num);
    int i;
    for (i = 1; i <= 10; i++)
    {
        int temp;
        temp = num * i;
        printf("%d*%d=%d\n", num, i, temp);
    }
    return 0;
}