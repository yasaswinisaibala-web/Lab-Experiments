#include <stdio.h>
int main() 
{
     int s1,s2,s3,s4,s5,total;
    float avg;
    printf("enter marks of subject 1:");
scanf("%d",&s1);
    printf("enter marks of subject 2:");
scanf("%d",&s2);
    printf("enter marks of subject 3:");
scanf("%d",&s3);
    printf("enter marks of subject 4:");
scanf("%d",&s4);
    printf("enter marks of subject 5:");
scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    printf("The total of all subjects is %d",total);
        avg=total/5.0;
        printf("\nthe average of 5 weeks is %f",avg);
}
