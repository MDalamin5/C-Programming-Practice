#include<stdio.h>
int main()
{
    char ch;
    char s[15];
    char sen[20];

    scanf("%c",&ch);
    scanf( " %s\n",&s);
    scanf( "%[^\n]s",sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);




}