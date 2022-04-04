#include<stdio.h>
int main()
{
    int num[]={10,20,23,45,50};
    int i,pos=-1,valu;
    printf("Enter your numeberL : ");
    scanf("%d",&valu);
    for(i=0;i<5;i++)
    {
        if(valu==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Not fountd");
    }
    else{
        printf("Number has found %d",pos);
    }
}
