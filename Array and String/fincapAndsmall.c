#include<stdio.h>
int main()
{
    char str[30];
    int i, alpha=0,small=0;
    printf("Enter your string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            alpha++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            small++;
        }
    }
    printf("THe Alphabed are: %d",alpha);
    printf("\nTHe Small letters are: %d",small);
}

