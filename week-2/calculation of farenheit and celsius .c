#include<stdio.h>
void main()
{
 float c,f; 
    printf("enter the temperature in celsius:");
    scanf("%f",&c);
    f=(c*(9.0/5.0))+32;
        printf("temperature in farenheit is %f",f);
    c=(f-32)*(5.0/9.0);
    printf("\ntemperature in celsius is %f",c);
}
