#include<stdio.h>
int main()
{
    int x,y,temp;
    printf(" Enter the two numbers :\n");
    scanf("%d %d",&x,&y);
    printf(" Before swapping  : A = %d B = %d\n",x,y);
    temp =x;
    x =y;
    y =temp;
    printf(" After swapping  : A = %d B = %d",x,y);
    return 0;
}