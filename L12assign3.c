#include<stdio.h>
#include<math.h>
int sumOfSerise();
int main()
{
    int r,n;
    int sum;
    printf("Enter the value of r and n: ");
    scanf("%d%d",&r,&n);
    sum=sumOfSerise(r,n);

    printf("The sum of the serise: %d",sum);

}

int sumOfSerise(int base,int power)
{
    int i,result=0;

    for(i=0;i<=power;i++)
    {
        result=result+pow(base,i);

    }
    return result;

}