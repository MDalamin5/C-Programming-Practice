//write a program which is finding area of triangle
#include<stdio.h>
int main()
{
    float base,hight,avg;
    printf("Please enter tringle base: ");
    scanf("%f",&base);
    printf("please enter tringle Hight: ");
    scanf("%f",&hight);
    avg=1/2.0 * base * hight;
    printf("The Avg is : %.2f",avg);

}