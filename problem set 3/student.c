#include<stdio.h>
int main()
{
    int rlno,sub1,sub2,sub3,tot;
    printf("enter the student roll no : ");
    scanf ("%d",&rlno);
    printf("enter the  subject 1 marks : ");
    scanf("%d",&sub1);
    printf("enter the  subject 2 marks : ");
    scanf("%d",&sub2);
    printf("enter the  subject 3 marks : ");
    scanf("%d",&sub3);
    tot = sub1+sub2+sub3;
    printf("\n");
    printf("student roll no : %d\n",rlno);
    printf("Total marks: %d \n",tot);
    printf(" Average : %f",(float)tot/3);
    return 0;
}