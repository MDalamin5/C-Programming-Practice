#include<stdio.h>
#include<math.h>
int main()
{
    float base1,base2,height,area;
    printf("Enter The Trapezoid Base1, Base2, Height: ");
    scanf("%f%f%f",&base1,&base2,&height);
    area=((base1+base2)/2)*height;

    printf("Area of the Trapezoid: %.3f",area);
    return 0;
}