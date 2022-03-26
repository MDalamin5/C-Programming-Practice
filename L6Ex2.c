#include<stdio.h>
int main()
{
    char ch,ch1;

    for(ch='a';ch<='z';ch++)
    {
        printf(" %c", ch);
    }

    printf(("\n"));

    for(ch1='A';ch1<='Z';ch1++)
    {
        printf(" %c", ch1);
    }

    return 0;
}