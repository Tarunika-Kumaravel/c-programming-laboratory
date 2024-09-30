#include<stdio.h>
void main()
{
   int a,b,tem;
   scanf("%d%d",&a,&b);
   tem=a;
   a=b;
   b=tem;
   printf("a=%d b=%d",a,b);
}

