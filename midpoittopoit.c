#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2;
    printf("Enter the valu of x1,y1,x2,y2 : ");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    printf("The mid poit is: %.2f , %.2f",(x1+x2)/2 , (y1+y2)/2);
}