#include<stdio.h>
int check_str(int);
int main()
{
    int array[10],n,i,result;
    printf("Enter Your araay size: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter %d elements: ",i+1);
        scanf("%d",&array[i]);
    }

    for(i=0; i<n; i++)
    {
        result = check_str(array[i]);
       
        if(result==array[i])
        {
            printf("%d is strong NUmber.\n",array[i]);
        }
    }
}

int check_str(int num)
{
    
    int sum=0,i,rem;
    
    while(num!=0)
    {
        rem=num%10;

        int fact=1;
        for(i=1; i<=rem; i++)
        {
            fact= fact*i;
        }
        sum= sum+fact;
        num=num/10;

    }
    
    return sum;
    
}