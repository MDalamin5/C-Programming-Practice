#include<stdio.h>
int main()
{
    int first=0,secend=1,count=0,n,febo;
    printf("enre your number: ");
    scanf("%d",&n);
    for(count=0; count<=n; count++)
    {
        if(count<=1)
        {
            
        febo=count;
        }
        else
        {
            febo=first+secend;
            first=secend;
            secend=febo;
        }
        printf("%d ",febo);
    }
    


}