#include<stdio.h>
int main()
{
    float radious,length,theta;
    printf("Enter the arc length and radius: ");
    scanf("%f %f",&radious,&length);
    theta=length/radious;
    printf("Theta is: %.3f",theta);
}