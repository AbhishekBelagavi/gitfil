#include<stdio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
int fibonacci(int n)
{
    int f1 = 0, f2 = 1, i;
 
        if (n < 1)
            return 0;
        printf("%d  ",f1);
        for (i = 1; i < n; i++)
        {
            printf("%d  ",f2);
            int next = f1 + f2;
            f1 = f2;
            f2 = next;
        }
    return 0;
}