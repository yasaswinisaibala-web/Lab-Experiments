#include<stdio.h>
void main()
{
    int a,b,c,sum;
    float avg;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    sum=a+b+c;
    printf("\nthe sum of %d,%d and %d is %d",a,b,c,sum);
avg=(float)sum/3;
    printf("\nthe average is %f",avg);
}
