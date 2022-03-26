#include<stdio.h>
int main()
{
    int num,r_num=0,rem;
    printf("Enter Your Number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        r_num=10*r_num + rem;
        num=num/10;
        
    }

    

    while(r_num!=0)
    {
        switch(r_num%10)
        {
            case 0:
            printf("Zero ");
            break;

            case 1:
            printf("One ");
            break;

            case 2:
            printf("Two ");
            break;

            case 3:
            printf("Three ");
            break;

            case 4:
            printf("Four ");
            break;

            case 5:
            printf("Five ");
            break;

            case 6:
            printf("Six ");
            break;

            case 7:
            printf("Seven ");
            break;

            case 8:
            printf("Eight ");
            break;

            case 9:
            printf("Nine ");
            break;
        }

        r_num=r_num/10;
    }
}