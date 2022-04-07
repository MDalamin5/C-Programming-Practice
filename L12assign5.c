
#include<stdio.h>
#include<math.h>
double doRoundNumber();
int main()
{
    
    double num,result;
    printf("Enter a floting Number: ");
    scanf("%lf",&num);

    int decimal_places;
    printf("Enter the decimal Places: ");
    scanf("%d",&decimal_places);

    result= doRoundNumber(num,decimal_places);
    printf("%g",result);
}

double doRoundNumber(double n,int d)
{
    double nerarest;
    nerarest=round(pow(10,d)*n)/pow(10,d);
    
    return nerarest;
}
    
    
    
    
    
