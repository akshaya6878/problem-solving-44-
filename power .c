#include <stdio.h>
#include <math.h> 
int main()
{
int b,e,c;
    printf("enter base");
    scanf("%d",&b);
    printf("enter exponent");
    scanf("%d",&e);
   c=pow(b,e);
    printf("power is %d",c);
    return 0;
}

