#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the two angles \n");
    scanf("%d %d", &x ,&y);
    z= 180-x-y;
    printf("the third angle is %d",z);
    return 0;
}