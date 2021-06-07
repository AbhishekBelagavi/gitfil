#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
    int x,n;
    printf("Enter the x value :\n ");
    scanf("%d",&x);
    printf("Enter the num of term (n) :\n");
    scanf("%d",&n);
    double sum=1;
    for(int i=2;i<=n;i++)
    {
        sum += pow(x,i)/fact(i);
    }
    printf("The sum of series : %lf",sum);
    return 0;

}

int fact(int n)
{
    int f=1;
    if(n>0)
    {
        for (int i = 1; i <=n; i++)
        {
            f=f*i;
        }
        return  f;
    }
    else return 1;
}