#include<stdio.h>
int main()
{
    char string[50];
    int  length = 0;
 
    printf("Enter a string \n");
    gets(string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    printf("The length of the string is : %d",length);
    return 0;

    
}