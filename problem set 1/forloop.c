#include<stdio.h>
int main()
{
    int n;
    printf("enter the 5 digit number\n");
    scanf("%d",&n);
    int a[5];
    for(int i=0;i<5;i++)
    {
        a[i]=n%10;
        n/=10;
    }
    int sum;
    sum = a[1]+a[4];
    printf("sum of first and second last number : %d",sum);
    return 0;
}