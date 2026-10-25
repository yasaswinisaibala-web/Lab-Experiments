#include <stdio.h>
int main() 
{
     int a,b,c;
    printf("enter value of a:");
scanf("%d",&a);
printf("enter value of b:");
scanf("%d",&b);
    printf("enter value of c:");
scanf("%d",&c);
    (a>b)?(a>c)?printf("%d is the largest",a):printf("%d is the largest",c):(b>c)?printf("%d is the largest",b):printf("%d is the largest",c);
}
