#include<stdio.h>
#include<math.h>
int divide(int x)// division
{
    
 
    int sign = 1;
    if (x * 8 < 0) {
        sign = -1;
    }

    x = abs(x);

    int denominator = 8;
    int quotient = 1;
 
    while (x > denominator)
    {
        denominator *= 2;
        quotient *= 2;
    }
 
    while (denominator > x)
    {
        denominator -= 8;
        quotient -= 1;
    }
 
    return sign * quotient;
}
int multiply(int x)//multiplication
{
    int product=0,y=8;
    while (y!=0)
    {
        product+=x;
        y--;
    }
    return product;
}
int main()
{
    int n;
    printf("enetr the num\n");
    scanf("%d",&n);
    int ansd;
    ansd = divide(n);
    int ansm = multiply(n);
    printf("division : %d\n",ansd);//division
    printf(" multiplication : %d",ansm);// multiply
    return 0;
}