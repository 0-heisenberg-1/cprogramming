/*WAP to read two integers from the user.Pass it to functions that calculates the HCF and LCM . 
Display the result form the main function. 
-> to return more than one value use concept of pointer */

/* so what is hcf and LCM 
hcf means highest common factor ---->> 
for two numbers ..let 4 and 6
4 factors are 1 2 4 
6 factors are 1 2 3 6 
so from here highest common factor is 2 ....it will be the highest factor from both which is commom. so there we can say hcf will always
be smaller than lowest number between two numbers...

LCM means lowest common multiple so ---->>
for two numbers let say 4 and 6
multiples of 4 is 4 8 12 16 20....
muiltiples of 6 is 6 12 18 24....
so here lowest multiple  common from two number is 12 so lcm is 12.
so for loop think of possible lcm between a & b..4 & 6 it will be 4*6  but it maybe smaller so run i up to 6*24 if lowest then 24 occurs
then it will be otherwise 24 will be
*/
#include <stdio.h>
#include <conio.h>
int hcf_lcm(int *h, int *l, int a, int b)
{
    int c;
    if (a > b)
        c = b;
    else
        c = a;
    //first lcm
    for (int i = 1; i <= c; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            *h = i;
        }
    }

    //for lcm
    for (int i = 1; i <= (a * b); i++)
    {
        if ((i % a) == 0 && (i % b) == 0)
        {
            *l = i;

            break;
        }
    }
    return 0;
}
int main()
{
    int a, b, lcm, hcf;
    printf("Enter two integer to find HCF and LCM : ");
    scanf("%d%d", &a, &b);
    hcf_lcm(&hcf, &lcm, a, b);
    printf("\nThe hcf and lcm of two numbers %d and %d is:%d \t %d ", a, b, hcf, lcm);
}