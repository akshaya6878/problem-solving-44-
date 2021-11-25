#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c=30;
    a=b;
    b=c;
    c=a;
    //swapping of numbers
    printf("the value of c is %d",a);
    printf("the value of b is %d",c);
    printf("the value of a is %d",b);
    return 0;
}

