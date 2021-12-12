#include<stdio.h>
int main ()
{
  int num1;
  int num2;
printf("pleaseenter two number: ");
scanf("%d %d",&num1,&num2);
  num1=num1-num2;
  num2=num1+num2;
  num1=num2-num1;

  printf("num1 is: %d\n",num1);
  printf("num2 is: %d",num2);

}