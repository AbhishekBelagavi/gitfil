#include<stdio.h>
float factorial(int);  
int main()
{
int n,i;
float sum=0;
printf("\n Enter no of terms : ");
scanf("%d",&n);
for(i=1;i<=(2*n-1);i+=2)
{
    
    sum=sum+(1.0/factorial(i));
}
printf("\n Sum of Series = %f",sum);
return 0;
}
float factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}