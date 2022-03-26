#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    float radius,height,volume,sa;
    printf("Enter the Radius and Height of cone: ");
    scanf("%f%f",&radius,&height);

    volume=(PI*(pow(radius,2))*height)/3;
    sa= PI*radius*(radius+sqrt(height*height+radius*radius));

    printf("Volume of The Cone = %.2f\n",volume);
    printf("Volume of The Cone = %.2f",sa);
    return 0;
}   