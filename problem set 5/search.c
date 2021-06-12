#include<stdio.h>
int main()
{
    int n,ele,pos=-1;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter the searching element :  ");
    scanf("%d",&ele);
    //Linear search
    printf("------Linear search------\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            pos=i+1;
            break;
        }
    }
    if(pos>=0)
    printf("the %d is present at %d position\n ",ele,pos);
    else
    printf("the %d is not present\n",ele);
    
    //binary search
    printf("------Binary search -------\n");
    int temp;
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("after sorting :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",*(a+i));
    }
    int low,high,m;
    pos=-1;
    low=0;
    high=n-1;
    while(low<=high)
    {
        m=(high+low)/2;
        if(a[m]==ele)
        {
            pos=m;
            break;
        }
        else if(a[m]>ele)
        high=m-1;
        else low = m+1;

    }
    if(pos>=0)
    printf("the %d is present at %d position\n ",ele,pos);
    else
    printf("the %d is not present\n",ele);


    return 0;
    
}