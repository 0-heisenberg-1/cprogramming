#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char A[50];
    int i,count=0;
    printf("Enter the message you want to display: ");
    gets(A);
    printf("\n\nThe message you typed was: ");
    puts(A);
    // using simple loop
    // for(i=0;A[i]!='\0';i++)
    // {
    //     count++;
    // }
    // using strlen
    // for(i=0;i<strlen(A);i++)
    // count++;
    
 printf("\n\n The length of message is: %d",count);
    return 0;
     
}