#include<stdio.h>
int main()
{
    float bp,da, hra,gp;
    printf("enter the emploee's basic pay : ");
    scanf("%f",&bp);
    da = 0.4 * bp;
    hra = 0.2 * bp;
    gp = bp + hra + da;
    printf("Grosds pay : %f",gp);
    return 0;
}