#include<stdio.h>
int main()
{
int a,b,c,d,e,t,m,p;
printf("enter the marks of subject a");
scanf("%d",&a);
printf("enter the marks of subject b");
scanf("%d",&b);
printf("enter the marks of subject c");
scanf("%d",&c);
printf("enter the marks of subject d");
scanf("%d",&d);
printf("enter the value of subject e");
scanf("%d",&e);
t=(a+b+c+d+e);
printf("total marks =%d",t);
 m=t/5;
printf("average =%d",m);
p=(t/500)*100;
printf("percentage =%d",p);
    return 0;
}
