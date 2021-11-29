#include<stdio.h>
int main()
{
    int a,n;
   printf("enter the value");
   scanf("%d",&n);
   for(a=1;a<=n;a++)
   if(a%2==0)
   printf("\n%d",a);
   return 0;
}
