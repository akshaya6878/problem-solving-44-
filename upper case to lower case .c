#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    int b;
    printf("enter the upper case letter");
    scanf("%c",&a);
    b=a+32;
    //upper case to lower case
    printf("the lower case letter is %C",b);
    return 0;
}

