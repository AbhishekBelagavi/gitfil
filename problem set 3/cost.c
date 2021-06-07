#include<stdio.h>
int main()
{
    int sell,profit;
    float cost;
    printf("enter the selling price of 15 product :");
    scanf("%d",&sell);
    printf("enter the total profit gained : ");
    scanf("%d",&profit);
    cost = (sell -profit)/15.0;
    printf("cost of each product : %f",cost);
    return 0;
}