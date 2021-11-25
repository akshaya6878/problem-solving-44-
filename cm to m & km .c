#include<stdio.h>
int main()
{
    float cm,m,km;
    printf("enter the value in centimeters");
    scanf("%f",&cm);
    m=cm/100;
    km=cm/10000;
    printf("length in meter is %2f",m);
    printf("length in kilometer is %2f",km);
    return 0;
}

