#include<stdio.h>
int main()
{
    int n,rev=0;
    printf(" enter the 5 digit num :");
    scanf("%5d",&n);
    rev = rev*10 + n%10;
    n/=10;
    rev = rev*10 + n%10;
    n/=10;
    rev = rev*10 + n%10;
    n/=10;
    rev = rev*10 + n%10;
    n/=10;
    rev = rev*10 + n%10;
    printf(" the reversed num : %d",rev);
    return 0;

}