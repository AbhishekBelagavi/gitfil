#include<stdio.h>
int main()
{
    int n,a[n];
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the %d elements \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",a+i);
    }
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("After sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}