#include <stdio.h>
int main()
{
    int number, i, sum = 0;
    for(i=0; i<10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number < 0)
            continue;
        sum = sum + number;
        printf("%d is added\n", number);
    }
    printf("Total = %d",sum);
    return 0;
}