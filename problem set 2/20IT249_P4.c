#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter the two num\n");
    scanf("%d %d",&a,&b);
    //with pow()function
    int z;
    z = pow((a-b),2);
    printf("with pow() : %d",z);
    printf("\n");
    //without pow() function
    int x;
    x= (a-b)*(a-b);
    printf("without pow() : %d",x);
    return 0;
}