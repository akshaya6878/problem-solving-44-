#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    printf("enter the principle amount");
    scanf("%d",&p);
    printf("enter the rate of interest");
    scanf("%d",&r);
    printf("enter the no of time periods");
    scanf("%d",&t);
    //finding the compound interest
    float ci=p*(1+r/100)^t;
    printf("compound interest=%f",ci);
    return 0;
}
