#include<stdio.h>
#include<math.h>
int main()
{
    float base,height,hypotenuse;
    printf("Enter the Length of Base and Hight of Triangle: ");
    scanf("%f%f",&base,&height);
    hypotenuse=sqrt(base*base+height*height);
    printf("Length of the Hypotenuse: %.2f",hypotenuse);
    return 0;
}