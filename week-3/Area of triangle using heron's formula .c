#include <stdio.h>
#include<math.h>
int main() 
{
    double a,b,c,area,s;
    printf("enter side a in cm:");
    scanf("%lf",&a);
    printf("enter side b in cm:");
    scanf("%lf",&b);
    printf("enter side c in cm:");
    scanf("%lf",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("\nthe area of the triangle using herons formula is %lf cm square",area);
}
