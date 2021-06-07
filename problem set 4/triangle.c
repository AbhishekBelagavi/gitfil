#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the 3 sides of triangle :\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("Type of TRiangle :\n");
    if( a>=b+c || b>=a+c || c>=b+a)
    {
        printf(" No Triangle!!");
        
    }
    else 
    {
        if((a*a==b*b+c*c) || (b*b==a*a+c*c) || ((c*c)==a*a+b*b) )
        printf("Right angled Triangle\n");
        else if(a*a > b*b + c*c || b*b >a*a +c*c || c*c >a*a+b*b)
        printf("Obtuse Triangle\n");
        else if(a*a<b*b+c*c || b*b <a*a +c*c || c*c <a*a+b*b )
        printf("Acute Triangle\n");
        else if(a==b && b==c)
        printf("Equilateral Triangle\n");
        else if(a==b ^ b==c)
        printf("Isosceles Triangle\n");
        else printf("Scalene Triangle\n");

    }
    return 0;

}