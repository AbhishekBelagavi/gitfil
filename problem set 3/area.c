#include<stdio.h>
#define Pi 3.14 
int main()
{
    //area of circle
    float area,p;
    int r;
    printf("Enter the radius : ");
    scanf("%d",&r);
    area = Pi*r*r;
    p = Pi*2*r;
    printf("  Area of circle : %f\n",area);
    printf("perimeter of circle : %f",p);
    return 0;
}