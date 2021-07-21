// WAP to generate 100 random numbers lying in betwwen 0.00 to 1.00
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    double n;
    srand(time(NULL));
    int i;
    for (i = 0; i < 100; i++)
    {
        n = ((float)rand() / RAND_MAX);
        printf("\t%lf", n);
    }
    return 0;
}