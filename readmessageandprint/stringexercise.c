// write a program that concat two strings s1 and s2 like:
// s1 is a friend of s2
// and also create a new string and concat above strings in one.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char s1[50], s2[50], s3[50];
    printf("Enter the name of string 1: ");
    gets(s1);
    printf("\n\nEnter the name of string 2: ");
    gets(s2);
    printf("\n\n %s is a friend of %s", s1, s2);
    printf("\n\nThe concatenation of both string is :%s", strcat(s1, s2));
    for ()
    {

        printf("\n\nThe value of string 3 after concat is:%s", strcpy(s3, s1));
        return 0;
    }