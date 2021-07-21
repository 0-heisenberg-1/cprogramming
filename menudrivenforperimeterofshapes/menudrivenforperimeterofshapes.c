#include<stdio.h>
#include<conio.h>
#define pi 3.14
int prect()
{
    int l,b;
 printf("Enter the length and breadth of rectangle: ");
 scanf("%d%d",&l,&b);
 return(2*(l+b));
}
int pcircle()
{
    int r;
 printf("Enter the radius of circle: ");
 scanf("%d",&r);
 return(2*pi*r);
}
int psquare()
{
    int l;
 printf("Enter the length of square: ");
 scanf("%d",&l);
 return(4*l);
}
int ptrian()
{
    int a,b,c;
 printf("Enter the sides of triangle a,b&c: ");
 scanf("%d%d%d",&a,&b,&c);
 return(a+b+c);
}
int main()
{
    int choice,perimeter;
    printf("Program to Find the perimeter\n\n\n\n ");
    printf("1.Click 1 to find the perimeter of reactangle.\n\n");
    printf("2.Click 2 to find the perimeter of circle.\n\n");
    printf("3.Click 3 to find the perimeter of square.\n\n");
    printf("4.Click 4 to find the perimeter of triangle.\n\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1/* constant-expression */:
        perimeter=prect();
        printf("The perimeter of reactangle is %d",perimeter);
        break;
    case 2:
        perimeter=pcircle();
        printf("The perimeter of circle is %d",perimeter);
        break;
    case 3: 
         perimeter=psquare();
         printf("The perimeter of square is %d",perimeter);
         break;
    case 4:
         perimeter=ptrian();
         printf("The perimeter of triangle is %d",perimeter);     
         break;
    default:
       printf("please enter a valid number.");
        break;
    }
return 0;
}