#include<stdio.h>
int main()
{
    int a,b,gcd,lcm;
    printf("Enter two numbers :\n");
    scanf("%d %d",&a,&b);
    for(int i=1; i<=a && i<=b;i++)
    {
        if(a%i==0  && b%i==0)
        gcd=i;
    }
    /*
    int max;
    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("The LCM of %d and %d is %d.", a, b, max);
            break;
        }
        ++max;
    }
    lcm = max;
    */
    lcm = (a*b)/gcd;
    printf("GCD : %d\n",gcd);
    printf("LCM : %d",lcm);
    return 0;

}