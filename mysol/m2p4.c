#include<stdio.h>
#include<math.h>
double main(){
    double r, p, c, m;
    printf("Enter your rool number:\n");
    scanf("roll number : %lf", &r);
    printf("enter your physics chemistry maths marks :\n");
    scanf("%lf%lf%lf%lf",&r, &p,&c,&m);
    printf("As follows , the total marks obtained by rool number %lf is: %lf",r, p+c+m);
    printf("the average marks of all three subjects is: %lf ", (p+c+m)/3);
    return 0;
    }