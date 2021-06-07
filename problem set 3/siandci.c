#include<stdio.h>
#include<math.h>
int main()
{
    float amount1,amount2,r,t,p;
    printf("Enter the principal :  ");
    scanf("%f",&p);
    printf("Enter the rate :  ");
    scanf("%f",&r);
    printf("Enter the time (in years)  :  ");
    scanf("%f",&t);
    r/=100;
    amount1 = p*(1+r*t);
    amount2 = p *(pow((1+r),t));
    printf("SIMPLE INTEREST :- \n");
    printf("Amount : %f\n ",amount1);
    printf("SI : %f\n",amount1 -p);
    printf("COMPOUND INTEREST :- \n");
    printf("Amount : %f\n ",amount2);
    printf("CI : %f\n",amount2 -p);
    return 0;

}