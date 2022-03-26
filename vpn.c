#include <stdio.h>
int main()
{
    int n, i;
    double term, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        term = 1.0 / i;
        if(i%2 == 0)
            sum = sum - term;
        else
            sum = sum + term;
    }
    printf("Sum = %lf", sum);
    return 0;
}