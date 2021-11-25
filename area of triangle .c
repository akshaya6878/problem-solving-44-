#include<stdio.h>
int main()
{
    float h,b,a;
    printf("enter the height of triangle");
    scanf("%f",&h);
    printf("enter the base of triangle");
    scanf("%f",&b);
    a=(h*b)/2;
    printf("area is %2f",a);
    return 0;
}
