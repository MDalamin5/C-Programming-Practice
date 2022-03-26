#include<stdio.h>
int main()
{
    float num;
    printf("Enter a Number: ");
    scanf("%f",&num);

    if(num==(int)num)
    {
        printf("Its a integer Number");
    }

    else
    {
        printf("Not a Integer");
    }

    return 0;
}