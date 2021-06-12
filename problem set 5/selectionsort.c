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
    int min,temp;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[min])
            min=j;
        }
        if(min!=i)
        {
            temp =a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }

    printf("After sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}