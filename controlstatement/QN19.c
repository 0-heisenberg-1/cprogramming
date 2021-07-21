// WAP given hour of an employee and hourly wages compute the employee weekly pay.count hour above 40 as overtime and give half wage as bonus.
#include <stdio.h>
#include <conio.h>
#define wage 100
int main()
{
    printf("Enter the number of employee: ");
    int e;
    scanf("%d", &e);
    float arr[e];
    int i;
    printf("\nEnter hour of an employee: ");
    for (i = 0; i < e; i++)
    {
        scanf("%f", &arr[i]);
    }
    float salary;
    printf("\nThe salary of an employee is:\n ");
    for (i = 0; i < e; i++)
    {
        if (arr[i] < 40)
        {
            salary = 100 * arr[i];
        }
        else
        {
            salary = 100 * 40 + (arr[i] - 40) * 50;
        }
        printf("\t%.4f\t%.4f", arr[i], salary);
    }
    return 0;
}