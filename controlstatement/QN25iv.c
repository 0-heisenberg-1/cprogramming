// To generate and print the sequence 3,7,11,15...up to 25th term
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("The sequence is : \n");
    int sum = 0, i = 3;
    int j = 1;

    do
    {
        printf("\t%d", i);
        i += 4;
        j++;
    } while (j <= 25);
    return 0;
}