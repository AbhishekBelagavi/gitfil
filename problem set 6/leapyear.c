#include<stdio.h>
void check(int );
int main() {
    int year;    

    printf("Enter a year: ");
    scanf("%d", &year);
    return 0;
}
void check(int year)
{
    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
    {
        printf("%d is a leap year", year);
    }

    else
    {
        printf("%d is not a leap year", year);
    }

}