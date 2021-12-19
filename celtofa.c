#include<stdio.h>
int main()
{
    int chois;
    float num1,num2,convC,convF;

    printf("1. F to C press one: ");
    printf("2. C to F for press Two");
    scanf("%d",&chois);

    switch(chois)
    {
        case 1:
        {
       printf("Enter your farahanhoight temp: ");
       scanf("%f",&num1);
        convC=(num1-32)/1.8;
       printf("Celcies scal is: %f",convC);
       }

        case 2:
        {
       printf("Enter your farahanhoight temp: ");
       scanf("%f",&num2);
        convF=(num1-32)/1.8;
       printf("Celcies scal is: %f",convC);
       }

    }

}