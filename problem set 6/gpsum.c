 
#include <math.h>
#include <stdio.h>
 

float sum(float x, float n)
{
    float i, total = 0.0, multi = x;
 
    for (i = 1; i < n; i++) {
 
        total = total + multi;
        multi = multi * x;
    }
    return total;
}
 

float main()
{
    float x,n;
    printf("enter the x value :");
    scanf("%f",&x);
    printf("enter the n valuec:");
    scanf("%f",&n);
    printf("%.2f", sum(x, n));
    return 0;
}