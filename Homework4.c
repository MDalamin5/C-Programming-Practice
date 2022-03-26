#include<stdio.h>
#include<math.h>
int main()
{
    int num,fiveh,oneh,fifty,twenty,ten,five,two,one,rem;
    printf("Please give your Amount: ");
    scanf("%d",&num);
    printf("Total Number of notes: \n");
    fiveh=num/500;  //2
    rem=num%500;
    printf("500: %d\n",fiveh);

    oneh=rem/100;//1
    rem=rem%100;
    printf("100: %d\n",oneh);

    fifty=rem/50;
    rem=rem%50;
    printf("50: %d\n",fifty);

    twenty=rem/20;
    rem=rem%20;
    printf("20: %d\n",twenty);

    ten=rem/10;
    rem=rem%10;
    printf("10: %d\n",ten);

    five=rem/5;
    rem=rem%5;
    printf("5: %d\n",five);

    two=rem/2;
    rem=rem%2;
    printf("2: %d\n",two);

    one=rem/1;
    rem=rem%1;
    printf("1: %d\n",one);





}