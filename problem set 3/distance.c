#include<stdio.h>
#include<math.h>
int main()
{
    // program to calculate the distance
    int x1,x2,y1,y2;
    float d,h;
    printf("enter the first coordinates :\n");
    scanf("%d%d",&x1,&y1);
    printf("enter the second coordinates :\n");
    scanf("%d%d",&x2,&y2);
    h = (float) (pow(x2-x1,2) + pow(y2-y1,2));
    d = sqrt(h);// distance calculation
    printf ( "the distance is : %f",d);
    return 0;

}