#include <stdio.h>
#include<math.h>
int main() 
{
    double p,r,t,ci,amount;
    printf("enter principal amount:");
    scanf("%lf",&p);
    printf("enter rate of interest:");
    scanf("%lf",&r);
    printf("enter time period:");
    scanf("%lf",&t);
    amount=p*((pow((1+r/100),t)));
    ci=amount-p;
        printf("the compound interest is %lf",ci);
}
