#include<stdio.h>
#define pi 3.14
int main()
{
    int l ,b ,r ,arear,p;
    float areac,cir;
    printf("enter the length and bredth of reactangle :\n");
    scanf("%d %d",&l ,&b);
    printf("enter the radius of circle : \n");
    scanf("%d",&r);
    arear = l*b;
    p = 2*(l+b);
    areac = pi *r*r;
    cir = 2*pi*r;
    printf("the perimeter of rectangle : %d\n",p);
    printf("area of rectangle  : %d\n",arear);
    printf("Circumference of circle : %.2f\n",cir);
    printf("area of circle : %.2f",areac);
    return 0;  
}