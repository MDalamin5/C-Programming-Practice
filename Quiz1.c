
#include<stdio.h>
int main()
{
    int num,rem,sum=0,q;
    
    printf("Ennter your number:  ");
    scanf("%d",&q);
    num=q;
    while(num!=0)
    {
        rem=num%10;
        
        sum=sum*10 + rem;
        num=num/10;
    }
    printf("The Revers of is: %d\n",sum);
 

    if (q==sum)
    {
        printf("Oks");
    }
    else
    {
        printf("Not");
        }
}
