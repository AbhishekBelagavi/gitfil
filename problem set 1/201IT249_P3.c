#include<stdio.h>
int main()
{
    int mat,chem,phy,tot,totmp;
    printf("enter the maths chem phy marks respectively \n");
    scanf("%d %d %d", &mat,&chem,&phy);
    tot=mat+chem+phy;
    totmp = mat + phy;
    if(mat >= 60 && chem >=40 && phy >=50)
    {
        if(tot>=200 || totmp >=150)
        printf("eligible");
        else printf("not eligible");
    }else printf(" not eligible");
    return 0;
}