#include<stdio.h>
int main()
{
    int n,a[n][n];
    printf("enter the size of square matrix : \n");
    scanf("%d",&n);
    printf("enter th elements\n ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    printf(" BEFORE :\n");
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }
    int temp,k=0;
    while(k<n)
    {
        for(int i=0,j=n-1;i!=n-1 && j!=0;i++,j--)
        {
            temp=a[k][i];
            a[k][i]=a[k][j];
            a[k][j]=temp;
        }
        k++;
    }
    printf("\n AFTER \n");
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }
    return 0;
}