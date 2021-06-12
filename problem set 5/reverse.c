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
    printf("Before reversing  : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d",a[i]);
    }
    int i=0,j=n-1,temp;
    while(i<j)
    {
        temp= a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    
    printf("\nAfter reversing  : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%2d",a[i]);
    }
    return 0;
}