#include<stdio.h>
int main()
{
    int amount,price,a_kg=0,Tot_price=0;
    
    while(1)
    {
        printf("Enter amount (in kg): ");
        scanf("%d",&amount);
        printf("Enter Price: ");
        scanf("%d",&price);
    
    if(amount*price<0)
    {
        printf("\nInvalid Input, enter a positive number\n");
        continue;
    }
    else if(amount==0 || price==0)
    {
        break;
    }

        else
        {
            Tot_price=Tot_price+ price;
            a_kg=a_kg+amount;
        }




    }

    printf("Total amount (in kg): %d, Total prince: %d",a_kg,Tot_price);
    printf("Average price per kg: %.2f",(float)Tot_price/a_kg);


    
}