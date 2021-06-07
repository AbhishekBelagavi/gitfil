#include<stdio.h>
int main()
{
    int num,rev=0,sum=0,backup;
    printf("Enter the number :\n");
    scanf("%d",&num);
    backup=num;
    while (num!=0)//reverse the number
    {
        rev = rev*10+num%10;
        num/=10;
    }
    while (backup!=0)
    {
        sum+= backup%10;
        backup/=10;
    }
    printf("Reversed number : %d\n",rev);
    printf("Sum Of Digits : %d\n",sum);
    return 0;
    
}