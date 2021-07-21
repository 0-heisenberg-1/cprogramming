// To read n persons age and find out which person fall under this category
// child if 1-12       teen if 13-19    adult if 20-29      mature if 30-50     old if 50+
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the count of numbers you want to enter age of: ");
    scanf("%d", &n);
    int age[n];
    printf("\nEnter the age of persons: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &age[i]);
    }
    int child = 0, teen = 0, adult = 0, mature = 0, old = 0;
    for (int i = 0; i < n; i++)
    {
        if (age[i] >= 1 && age[i] <= 12)
            child++;
        else if (age[i] >= 13 && age[i] <= 19)
            teen++;
        else if (age[i] >= 20 && age[i] <= 29)
            adult++;
        else if (age[i] >= 30 && age[i] <= 50)
            mature++;
        else if (age[i] > 50)
            old++;
        else if (age[i] <= 0)
            printf("\n%d is not a valid age: ", age[i]);
    }
    printf("\nThe total no of:\nchild=%d\nteenager=%d\nadult=%d\nmature=%d\nold=%d", child, teen, adult, mature, old);
    return 0;
}