#include<stdio.h>
int main()
{
    int i,j,n;
    char ch;
    printf("Enter the numbr of row: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    
    {
        ch=65;
        
        for(j=1 ;j<=n-i; j++)
        {
            printf(" ");
        }
            
        for(j=1; j<=i; j++)
        
        {
            printf(" %c",ch);
            ch++;
            
        }

        printf("\n");
        
    }
}