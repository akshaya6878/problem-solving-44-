#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    printf("enter the principle amount");
    scanf("%d",&p);
    printf("enter the rate of interest");
    scanf("%d",&r);
    printf("enter the time period");
    scanf("%d",&t);
    //finding simple interest
    float si=(p*r*t)/100;
    printf("simple interest=%3f",si);
    return 0;
}

