#include <string.h>
 #include<stdio.h>
int main()
{
    char s[1000];  
    int  i,k=0;
    printf("Enter  the string : ");
    gets(s);
    
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
 
     	
     	if(s[i]==' ')
     	{
		  k++;
		  i--;
	    }
     	
    }
    printf("string after removing all blank spaces: \n");
 
 	printf("%s",s);
 	 
     
    return 0;
}