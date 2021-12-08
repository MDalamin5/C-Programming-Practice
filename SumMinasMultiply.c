//use two number and find sum, minus, multiaplications
#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("please enter two number : ");
    scanf("%d %d",&num1,&num2);
    result= num1+num2;
    printf("Your Sum is: %d\n",result);
    result=num1-num2;
    printf("Mines is: %d\n",result);
    result=num1*num2;
    printf("Multiaplicatins is : %d\n",result);
      result=num1/num2;
      printf(" Div is : %d\n",result);
      result=num1%num2;
      printf(" reamin is: %d",result);
}