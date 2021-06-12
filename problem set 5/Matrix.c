#include<stdio.h>
int main()
{
    int m1,n1,m2,n2,a[m1][n1],b[m2][n2];
    printf("Enter the rows and column size respectively of first matrix : \n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the rows and column size respectively of second matrix : \n");
    scanf("%d%d",&m2,&n2);
    printf("Enter the first matrix elements \n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
    printf("Enter the second matrix elements \n");
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",*(b+i)+j);
        }
    }
    //Addition
    int sum[m1][n1],mul[m1][n2];
    if(m1==m2 && n1==n2)
    {
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("the sum is : \n");
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                printf("%d  ",sum[i][j]);
            }
            printf("\n");
        }

    }
    else
    printf("the addition is not possible\n");

    //multiplication
    if(n1==m2)
    {
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                for(int k=0;k<n1;k++)
                {
                    mul[i][j]=a[i][k]*b[k][j];
                }
            }
        }
        printf("the multiplication is : \n");
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                printf("%d  ",mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("the multiplication is not possible \n");

    return 0;
}