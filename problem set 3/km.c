#include<stdio.h>
int main()
{
    float km,ft;
    double inc;
    int m;
    long cm;
    printf("enter the distance in km :");
    scanf("%f",&km);
    m = km*1000;
    cm = km*100000;
    ft = km*3280.84;
    inc = km*39370.08;
    printf("distance in meter : %d\n",m);
    printf("distance in feet : %.2f\n",ft);
    printf("distance in inch : %.2lf\n",inc);
    printf("distance in centimeter : %ld\n",cm);
    return 0;

}