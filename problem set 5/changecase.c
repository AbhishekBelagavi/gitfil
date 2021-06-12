#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000];
    printf("Enter the String :\n");
    gets(a);
    int n= strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]!=' ')
        {
            if(islower(a[i]))
            a[i]=toupper(a[i]);
            else a[i]=tolower(a[i]);
        }
    }
    printf("after : %s",a);
    return 0;
}