#include<stdio.h>
int main()
{
    char c;
    printf("enter the character\n");
    scanf("%c",&c);
    if(c >= 'a' && c<='z')
    printf("lower case!!");
    else if (c>='A'&& c<='Z')
    printf("Upper case!!");
    else if(c >= '0'&& c<='9')
    printf("digit!!");
    else printf("special character!!");
    return 0;
    
}