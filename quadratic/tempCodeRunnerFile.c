#include<stdio.h>
#include<conio.h>
prect();
pcircle();
psquare();
ptrian();
int main()
{
    int choice,perimeter;
    printf("Program to Find the perimeter ");
    printf("1.Click 1 to find the perimeter of reactangle.");
    scanf("%d",&choice);
    printf("2.Click 2 to find the perimeter of circle.");
    scanf("%d",&choice);
    printf("3.Click 3 to find the perimeter of square.");
    scanf("%d",&choice);
    printf("4.Click 4 to find the perimeter of triangle.");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1/* constant-expression */:
        perimeter=prect();
        break;
    case 2:
        perimeter=pcircle();
        break;
    case 3: 
         perimeter=psquare();
         break;
    case 4:
         perimeter=ptrian();     
         break;
    default:
       printf("please enter a valid number.");
        break;
    }
return 0;
}