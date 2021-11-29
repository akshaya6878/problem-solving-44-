#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 1st angle of triangle");
    scanf("%d",&a);
    printf("enter the 2nd angle of triangle");
    scanf("%d",&b);
    c=180-(a+b);
    printf("third angle is %d",c);
    return 0;
}
