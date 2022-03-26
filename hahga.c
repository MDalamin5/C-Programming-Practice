#include<stdio.h>
int main()
{
    int num1,num2;

    scanf("%d%d",&num1,&num2);


    switch (num1>num2)
    {
    case 1:
     printf("%d is large",num1);
        break;

        case 0:
        printf("%d is large",num2);
    
    default:
        break;
    }

    return 0;
}
