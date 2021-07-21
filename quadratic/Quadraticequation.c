/* WAP to display the real,imaginary and equal roots of Quadratic Equation */ 
// In this we must remember to use brackets and for imaginary perform real and imaginary in part-part
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float root1,root2,a,b,c,discri;
    
    float real,img;

    printf("Enter the value of a,b,c in quadratic equation: ");
    scanf("%f%f%f",&a,&b,&c);
    discri= b*b-4*a*c;
    if(discri>0)
    {
      root1=(-b-sqrt(discri))/2*a;
      root2=(-b+sqrt(discri))/2*a;
      printf("The real roots are %f and  %f",root1,root2);
    }
    else if(discri==0)
{
    root1=(-b-sqrt(discri))/2*a;
    printf("The equal root is:%f",root1);
    
}
 else
 {
     discri=-(discri);
    real= -(b)/(2*a);
    printf("real is %f",real);
    img=  (sqrt(discri))/ (2*a);
     printf("The imaginary roots are: %.2f+%.2fi and %.2f-%.2fi",real,img,real,img);    
       }
     

return 0;
}