#include<stdio.h>
void main ()
{
    float p,n,r,si;
    printf("enter principal amount in rupees:");
scanf("%f",&p);
    printf("enter the term duration in months: ");
    scanf("%f",&n);
printf("enter the rate of interest:");
scanf("%f",&r);
    si=(p*n*r)/100;
printf("simple interest is %f",si);
}
