#include<stdio.h>
int main()
{
    int a,b;
    int addition,subtraction,multiplication,mod;
    float division;
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    //arthmetic operations
     addition=a+b;
    subtraction=a-b;
    multiplication=a*b;
    mod=a%b;
    division=(float)a/b;
    printf("addition is %d\n", addition);
    printf("subtraction is %d\n", subtraction);
    printf("multiplicattion is %d\n", multiplication);
    printf("mod is %d\n", mod);
    printf("division is %f\n ",division);
    return 0;
}


