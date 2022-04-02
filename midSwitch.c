
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    char ch;
    printf("Enter your operator: ");
    scanf(" %c",&ch);

    switch(ch)
    {
        case '+':
        sum=num1+num2;
        printf("%d + %d = %d",num1,num2,sum);
        break;

        case '-':
        
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;

        case '*':
        
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;

        case '/':
        
        printf("%d / %d = %.2f",num1,num2,(float)num1/num2);
        break;
    }
    
}


