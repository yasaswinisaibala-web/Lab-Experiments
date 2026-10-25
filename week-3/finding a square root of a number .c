#include<stdio.h>
#include<math.h>
void main ()
{
    double n,result;
    printf("enter a number to find its square root:");
    scanf("%lf",&n);
    result=sqrt(n);
    printf("\n the square root of number %.2lf is %.2lf",n,result);
}
