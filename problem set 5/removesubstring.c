#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    printf("Enter the String:\n");
    gets(a);
    printf("enter the substring to be removed : \n");
    gets(b);
    printf("before  : %s\n",a);
    int i, j, stringLen, toRemoveLen;
    int found;

    stringLen   = strlen(a);      
    toRemoveLen = strlen(b); 


    for(i=0; i <= stringLen - toRemoveLen; i++)
    {
        found = 1;
        for(j=0; j<toRemoveLen; j++)
        {
            if(a[i + j] != b[j])
            {
                found = 0;
                break;
            }
        }

        if(a[i + j] != ' ' && a[i + j] != '\t' && a[i + j] != '\n' && a[i + j] != '\0') 
        {
            found = 0;
        }

        if(found == 1)
        {
            for(j=i; j<=stringLen - toRemoveLen; j++)
            {
                a[j] = a[j + toRemoveLen];
            }

            stringLen = stringLen - toRemoveLen;

            i--;
        }
    }

    printf("after : %s",a);
    return 0;
}