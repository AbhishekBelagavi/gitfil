#include<stdio.h>
int main()
{
    int n,a[n+1];
    printf("Enter the size of list of numbers : ");
    scanf("%d",&n);
    printf("Enter the numbers :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position : ");
    int pos ,ele;
    scanf("%d",&pos);
    printf("enter the element :  ");
    scanf("%d",&ele);
    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }

}