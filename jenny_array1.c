/*
#include<stdio.h>
int main()
{
    int a[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter Your Number: ");
        scanf("%d",&a[i]);
    }
    for(i=3;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

}
*/
/*
#include<stdio.h>
int main()
{
    int i;
    float avg ,mark[5],sum=0;

    for(i=0;i<5;i++)
    {
        printf("Enter student marks: ");
        scanf("%f",&mark[i]);
        sum=sum+mark[i];
    }
    avg=sum/5;

    printf("%.2f\n",sum);
    printf("%.2f\n",avg);


}
*/

#include<stdio.h>
int main()
{
    int i,even=0,odd=0,num[9];

    for(i=0;i<10;i++)
    {
        printf("Enter num[%d]: ",i);
        scanf("%d",&num[i]);

        if(num[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }

    printf("%d\n",even);
    printf("%d\n",odd);
}