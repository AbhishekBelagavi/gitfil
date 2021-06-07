#include<stdio.h>
#include<math.h>
int main()
{
    double r1,r2,a,b,c;
    printf(" the quadratic equation form : ax^2 +bx+c");
    printf("\n enter a,b,c values respectively\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    float d = sqrt(b*b - 4*a*c);
    if(d>=0)
    {
        r1 = (-b+d)/(2*a);
        r2 =(-b-d)/(2*a);
        printf(" the first root is %lf",r1);
        printf("\n the second root is %lf",r2);

    }
    else
    {
        printf(" the first root is %lf + i %lf\n",-b/(2*a),sqrt(-d/(2*a)));
        printf(" the second root is %lf - i %lf",-b/(2*a),sqrt(-d/(2*a)));
    }
    return 0;
}