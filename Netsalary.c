#include<stdio.h>
int main()
{
    float bp,ns,b,ta;
    scanf("%f",&bp);
    if(bp>0 && bp<=10000)
    {
        b=2/100.0*bp;
        ta=1/100.0*bp;
    }  
    else if(bp>10000 && bp<=25000)
   {
        b=5/100.0*bp;
        ta=2/100.0*bp;
    }
    else if(bp>25000 && bp<=50000)
    {
        b=10/100.0*bp;
        ta=3/100.0*bp;
    }
    else if(bp>50000 && bp<=100000)
    {
        b=15/100.0*bp;
        ta=5/100.0*bp;
    }
    else if(bp>100000)
    {
        b=20/100.0*bp;
        ta=5/100.0*bp;
    }
    ns=b+ta+b;
    printf("net salary=%.2f",ns);
    return 0;
}
