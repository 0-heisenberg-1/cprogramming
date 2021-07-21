// WAP to that takes a string from a user and convert the string into uppercase if first character is lower case and viceversa.
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter the string: ");
    char string[100];
    gets(string);
    // for converting lower to uppper and viceversa
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] += 32;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] -= 32;
        }
    }
    printf("\n");
    puts(string);
    return 0;
}