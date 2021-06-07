#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the 5 digit num :");
    scanf("%5d",&n);
    sum +=  n% 10 ;
    n/=10;
    sum +=  n% 10 ;
    n/=10;
    sum +=  n% 10 ;
    n/=10;
    sum +=  n% 10 ;
    n/=10;
    sum +=  n% 10 ;
    printf(" the sum of digit is %d",sum);
    return 0;

}