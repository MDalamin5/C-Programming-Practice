#include<stdio.h>
#include<math.h>
int main()
{
    float sum,n;
    printf("Enter the Valu of n: ") ;
    scanf("%f",&n);

    sum=(n*(n+1)*(2*n+1))/6 ;

    printf("%.2f",sum);
}