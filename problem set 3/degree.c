#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter the  temperature in Fahrenheit :");
    scanf("%f",&F);
    C= 5.0/9*(F-32);
    printf(" the temperature in centigrade : %f",C);
    return 0;
}