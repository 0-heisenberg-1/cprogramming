
// This is to print fibonacci and find the sum of nth term. using recursive function
#include <stdio.h>
#include <conio.h>
int fibo(int n)
{
    int arr[n + 2];
    static int n1 = 0, n2 = 1, n3;
    static int sum = 1;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        sum += n3;
        printf("\t%d", n3);
        fibo(n - 1);
    }
    return (sum);
}
int main()
{
    int num;
    printf("Enter the number up to which you want to calculate fibonacci of: ");
    scanf("%d", &num);
    printf("\n%d\t%d", 0, 1);
    fibo(num - 2);
    printf("\nThe nth fibonnaci of %d is:%d ", num, fibo(num - 2));
    return 0;
}