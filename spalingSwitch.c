#include<stdio.h>
int main()
{
    int digit;
    printf("Please enter a int number: ");
    scanf("%d",&digit);
    switch(digit)
    {
        case 1:
        printf("One");
        break;
        case 0:
        printf("Zero");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        default:
        printf("Invalid digit");
    }
}