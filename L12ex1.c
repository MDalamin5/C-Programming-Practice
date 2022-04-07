#include<math.h>
#include<stdio.h>
#define PI 3.1416

double diameter();
double circumference();
double area();


int main()
{
    double dia,cir,ar;
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    dia= diameter(radius);
    printf("The diameter of the circle = %.2lf\n",dia);

    cir= circumference(radius);
    printf("The Circumference of the circle = %.2lf\n",cir);

    ar= area(radius);
    printf("The Area of the circle = %.2lf",ar);

}

double diameter(double x)
{
    double result;
    result= 2*x;

    return result;
}

double circumference (double x)
{
    double result;
    result= 2*PI*x;

    return result;
}

double area(double x)
{
    double result;
    result= PI*x*x;

    return result;
}