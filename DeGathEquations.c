#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("please enter your valu:a b c");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
                                   //wrong answer why?
   x1= (-b+d)/(2*a);
   x2= (-b-d)/(2*a);
   printf("x1 value is: %.2lf\n",x1);
   printf("x2 value is: %.2lf",x2);

}