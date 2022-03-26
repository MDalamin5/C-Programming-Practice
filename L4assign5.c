#include<stdio.h>
#include<math.h>

int main()
{
    float r,a;
    float c_diameter,triangle_hypotenuse;
    
    printf("Enter the radius of Circle and side of Square: ");
    scanf("%f %f",&r,&a);
    
    c_diameter=2*r;
    triangle_hypotenuse=(sqrt(2))*a;

    if(c_diameter>=triangle_hypotenuse)
    {
        printf("Possible to place inside the Circel");

    }

    else
    printf("Not possable");
    
}