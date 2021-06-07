#include<stdio.h>
int main()
{
    int x;
    float a,b,c;
    printf("\t------BASIC  CALCULATOR --------\n\n");
    printf(" 1 : Addition\n 2 : Subraction\n 3 : Multiplication\n 4 : Division\n");
    printf("Enter the choice :\n");
    scanf("%d",&x);
    switch (x)
    {
        case 1:
                printf("Enter two numbers :\n");
                scanf("%f%f",&a,&b);
                c=a+b;
                printf("answer : %f",c);
                break;
        case 2:
                printf("Enter two numbers :\n");
                scanf("%f%f",&a,&b);
                c=a-b;
                printf("answer : %f",c);
                break;
        case 3:
                printf("Enter two numbers :\n");
                scanf("%f%f",&a,&b);
                c=a*b;
                printf("answer : %f",c);
                break;
        case 4 :
                printf("Enter two numbers :\n");
                scanf("%f%f",&a,&b);
                c=a/b;
                printf("answer : %f",c);
                break;
        default: printf("inavlid input\n");
                break;
    }
    return 0;

}