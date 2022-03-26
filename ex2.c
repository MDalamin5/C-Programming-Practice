#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,sm1,sm2;
    printf("Enter the value of m and n: ");
    scanf("%d%d",&m,&n);
    sm1=m*pow(2,n); //sm= Short Methode
    printf("The valu is m<<n = %d\n",m<<n);
    printf("The valu of m*2^n = %d\n",sm1);

    printf("\n");

    sm2=m/pow(2,n); //sm= Short Methode
    printf("The valu is m>>n = %d\n",m>>n);
    printf("The valu of m/2^n = %d\n",sm2);

    return 0;
 
}