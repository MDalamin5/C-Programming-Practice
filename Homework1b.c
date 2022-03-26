#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter the Base and Hight of Parallelogram: ");
    scanf("%f%f",&base,&height);
    area=base*height;
    printf("Area of the Parallelogram: %.3f",area);
    return 0;
}