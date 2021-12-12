#include<stdio.h>
int main()
{
    int base,hight;
    float area;
    printf("please enter triangle base: ");
    scanf("%d",&base);
    printf("please enter hight: ");
    scanf("%d",&hight);
    area=1/2.0 * base * hight;
    printf(" Total area of triangle : %.2f",area);
}