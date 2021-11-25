#include<stdio.h>
int main()
{
    int d,w,y;
    printf("enter the no of days");
    scanf("%d",&d);
    y=d/365;
    w=(d-(y*365))/7;
    d=d-((y*365)+(w*7));
    printf("year is %d",y);
    printf("weeks is %d",w);
    printf("days is %d",d);
    return 0;
}
