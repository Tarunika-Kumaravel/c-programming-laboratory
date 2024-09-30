#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter temperature in fahrenheit");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%f fahrenheit is equal to %f celsius\n",celsius);
    return 0;
}
