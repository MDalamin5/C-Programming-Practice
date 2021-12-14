#include<stdio.h>
int main()
{
    int num;
    printf("please enter your markes: ");
    scanf("%d",&num);
    if(num>=80)
    printf("You got A+");
     if (num<=33)

    printf("Sorry better luck for next time");
    else if (num<=79)
    printf("You are pass");
}