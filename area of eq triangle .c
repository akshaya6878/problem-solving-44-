#include<stdio.h>
#include<math.h>
int main()
{
    float s,a;
    printf("enter the side of triangle");
    scanf("%f",&s);
    a=(sqrt(3)/4)*s*s;
    printf("area is %2f",a);
    return 0;
}
