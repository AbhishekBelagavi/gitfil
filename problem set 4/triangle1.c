#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the 3 sides of triangle :\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("Type of TRiangle :\n");
    if( a>=b+c)
    {
        printf(" No Triangle!!");
        return 0;
    }
    else 
    {
        int p=0;
        if(a*a == b*b+c*c)
        {
            printf("Right angled Triangle\n");
            p=1;
        }
        if(a*a > b*b + c*c)
        {
            printf("Obtuse Triangle\n");
            p=1;
        }
        if(a*a<b*b+c*c)
        {
            printf("Acute Triangle\n");
            p=1;
        }
        if(a==b && b==c)
        {
            printf("Equilateral Triangle\n");
            p=1;
        }
        if(a==b ^ b==c)
        {
            printf("Isosceles Triangle\n");
            p=1;
        }
        if(p!=1)
        printf("Scalene Triangle\n");

    }
     return 0;
}