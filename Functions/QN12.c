// 12.	To read an integer number, pass it to a function and add individual digits contained in it until
// the final sum is single digits and display sum in main function,
#include <stdio.h>
#include <conio.h>
int fun(int x)
{
    int sum = 0, temp, rem, i;
    temp = x;
    for (int i = 0; temp > 0; i++)
    {
        rem = temp % 10;
        sum += rem;
        temp = temp / 10;
    }
    return (sum);
}
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    printf("\n The sum of individual digits of %d is %d", num, fun(num));
    return 0;
}
