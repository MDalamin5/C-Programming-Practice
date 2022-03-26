#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    switch((year%400==0) || (year%4==0 && year%100!=0))
    {
        case 1:
        printf("Leap Year");
        break;

        case 0:
        printf("Not Leap Year");
        break;

        default:
        printf("Invalid Inpute");

        

    }

}