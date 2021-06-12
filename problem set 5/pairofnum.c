#include<stdio.h>
int main()
{
    int n,a[n];
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",a+i);
    }
    int c,b,first,second,max=-1;
    for(int i =0;i<n-1;i++)
    {
        c=a[i];
        for(int j=i+1;j<n;j++)
        {
            b=a[j];
            if(max<a[i]+a[j])
            {
                max=a[i]+a[j];
                first=a[i];
                second=a[j];
            }
        }
    }
    printf("the pair : (%d ,%d)",first,second);
    return 0;
    
}