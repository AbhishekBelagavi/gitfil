#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Enter the String :\n");
    gets(a);
    int i=0,count=0;
    while(a[count])
    {
        count++;
    }
    while(count>=0)
    {
        b[i]=a[count-1];
        i++;
        count--;
    }
    b[i+1]='\0';
    printf("the string is : \n");
    printf("%s\n",b);
    
    
    int n = strlen(a);
    int k=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=b[j])
        {
            k=1;
            break;
        }

    }
    if(k==1)
    printf("string is not palindrome");
    else printf("string is plaindrome");
    return 0;

}