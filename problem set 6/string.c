#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    char str1[max],str2[max];
    int n;
    char temp;
    printf("1.Length of string\n 2.copy the other string\n 3.compare two string\nEnter the number of the choice :\n");
    scanf("%d",&n);


    switch (n)
    {
    case 1:printf("Enter the string :\n");
        scanf("%s",str1);
        printf("%d",strlen(str1));
        break;
    case 2 : printf("Enter the string :\n");
        scanf("%s",str1);
        strcpy(str2,str1);
        printf("%s",str2);
        break;
    case 3:printf("Enter the 1st string :\n");
        scanf("%s",str1);
        printf("Enter the  2nd string :\n");
        scanf("%s",str2);
        printf("%d",strcmp(str1,str2));
        break;
    default : printf("enter the valid choice\n");
    break;
    }
}