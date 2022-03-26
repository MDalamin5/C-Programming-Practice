#include<stdio.h>
int main()
{
    float theta1,theta2,theta3;
    printf("Enter all angle of thrangle: ");
    scanf("%f%f%f",&theta1,&theta2,&theta3);
    
    if(theta1+theta2+theta3==180.000000)
    printf("Its a valid Triangle");
    
    else
        printf("Its invalid triangle");
}