#include<stdio.h>
int main(){
 int t,e,m,s,ss,tot;
 scanf("%d %d %d %d %d",&t,&e,&m,&s,&ss);
 tot=t+e+m+s+ss;
 float avg=tot/5.0;
printf("total\t:%d\naverage :%.2f\n",tot,avg);
printf("your grade is ");
if(tot>=480 && tot<=500)
{printf("O");}
else if (tot>=450&&tot<480)
{printf("A+");}
else if(tot>=400&&tot<450)
{printf("A");   }
else if(tot>=350&&tot<400)
{  printf("B+");}
else if(tot>=300&&tot<350)
{ printf("B");}
else if(tot>=250&&tot<300)
{  printf("C");}else if(tot>=0||tot>250)
{  printf("Fail");}

return 0;}￼Enter
