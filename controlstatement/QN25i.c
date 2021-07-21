// TO print the table of ASCII from character 32 to 255.
#include <stdio.h>
#include <conio.h>
int main()
{
    char any;
    printf("The characters from ASCII table from 32 to 255 is :\n ");
    int i;
    for (i = 32; i < 255; i++)
    {
        any = i;
        printf("\t%c", any);
    }
    return 0;
}