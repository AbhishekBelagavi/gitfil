#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of list of numbers : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp,count=0,rev;
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        rev=0;
        while(temp!=0)
        {
            rev = rev*10 + temp%10;
            temp=temp/10;
        }
        if(rev==a[i]){
        count++;
        }
    }
    printf("Number of plaindrome : %d",count);
    return 0;
    
}