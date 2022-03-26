#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of triangle a, b, c : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c || a+c>b || b+c>a)
    {
        printf("Its a valit triangle");
    }
    else
    printf("Its invalid");
}