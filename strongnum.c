#include<stdio.h>
int main()
{
  int num,sum=0,fact,i,temp,rem;
  printf("Enter a number: ")  ;
  scanf("%d",&num);
  temp=num;
  while(temp!=0)
  {
      rem=temp%10;
      fact=1;
      for(i=1; i<=rem; i++)
      {
          fact=fact*i;
      }
      sum=fact+sum;
      temp=temp/10;

  }
  if(sum==num)
  printf("its a strong number");
  else
  printf("its not a strong number");
}