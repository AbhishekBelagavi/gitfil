#include<stdio.h>
int main()
{
    int n,p;
    printf("Enter the number :\n");
    scanf("%d",&n);
    int cp=0,cnp=0,prime[100000],composite[100000];
    for(int i =2;i<=n;i++)//check the num is prime or not
    {
        p=1;
        for(int j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            prime[cp]=i;
            cp++;
        }
        if(p==0)
        {
            composite[cnp]=i;
            cnp++;
        }
    }
    printf(" 1 and 0 are neither prime nor non composite\n");
    printf("Prime Numbers : ");
    for (int i = 0; i < cp; i++)
    {
        printf("%d ,",prime[i]);
    }
    printf("\n Non Prime Numbers :");
    for (int i = 0; i < cnp; i++)
    {
        printf("%d ,",composite[i]);
    }
    
    return 0;

}