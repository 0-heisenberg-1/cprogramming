// WAP to read the message and print the number of  character in it.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    printf("Enter the message: ");
    char Arr[200];
    gets(Arr);
    int i;
    printf("\nThe message you entered is:");
    puts(Arr);

    int a;
    a = strlen(Arr);
    printf("\nThe number of character in the message is:%d ", a);
    return 0;
}