// //  Write a function checkPalindrome() to check whether a given number is palindrome or   not? If it is palindrome return ' 1'
// else return '0'.
//  The number must be read at main function and pass to the checkPalindrome() function and the result must
// //  be displayed at main function as according to the return value of checkPalindrome() function.
#include <stdio.h>
#include <conio.h>
int checkpalindrome(int);
int main()
{
    int num;
    printf("Enter the number to check whether it is palindrome or not: ");
    scanf("%d", &num);
    checkpalindrome(num);
    if (checkpalindrome(num) == 1)
        printf("\nThe number %d is palindrome.", num);
    else if (checkpalindrome(num) == 0)
        printf("\nThe number %d is not a palindrome.", num);
    return 0;
}
int checkpalindrome(int a)
{
    int rev = 0, temp, rem, check;
    temp = a;
    for (int i = 0; temp > 0; i++)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == a)
    {
        check = 1;
    }
    else
    {
        check = 0;
    }
    return (check);
}