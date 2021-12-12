#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    printf("What is length of AB: ");
    scanf("%lf",&a);
    printf("What is length of BC: ");
    scanf("%lf",&b);
    printf("What is length of AC: ");
    scanf("%lf",&c);
    s=(a+b+c)/2.0;
    
    printf("The area is : %.2lf",s);

      area= sqrt (s*(s-a)*(s-b)*(s-c));
      printf("The area is: %lf",area);
}