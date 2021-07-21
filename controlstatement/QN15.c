// WAP to find the value of cos(x)
// cos(x)=1-x^2/2!+x^4/4!-X^6/6!+....
#include <stdio.h>
#include <conio.h>
#define PI 3.1415
int main()
{
    int x;
    printf("Enter the value of x in degree: ");
    scanf("%d", &x);
    // converting degree into radian
    double rad;
    rad = x * (PI / 180);
    // for finding value of cos(x)
    double temp = 1, sum = 1;
    int i;
    for (i = 1; i <= 8; i += 2)
    {
        temp = ((-1) * temp * rad * rad) / (i * (i + 1));
        sum += temp;
    }
    printf("The value of cos(%d) is %.2lf", x, sum);
    return 0;
}
// same for sin(x)
// just assign value of temp and sum as x and change factorial as per series