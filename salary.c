#include<stdio.h>
int main()
{
    int b,d,h,p,l;
    printf("enter the value of basic");
    scanf("%d",&b);
    printf("enter the value of da");
    scanf("%d",&d);
    printf("enter the value of hra");
    scanf("%d",&h);
    printf("enter the value of pf");
    scanf("%d",&p);
    printf("enther the value of lic");
    scanf("%d",&l);
    //monthly salary of a person
    float s;
    s=(b+d+h-p-l);
    printf("the monthly salary of a person is %f ",s);
    return 0;
}
