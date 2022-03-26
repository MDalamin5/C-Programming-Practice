#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float radius,volume;
    printf("Enter The Radius of sphere: ");
    scanf("%f",&radius);
    volume=(4*PI*pow(radius,3)/3);
    printf("Volume of the Sphere: %.2f",volume);
}