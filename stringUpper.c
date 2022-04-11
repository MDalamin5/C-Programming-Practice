#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[30]={"Hello Programer 123"};
    int i;

    for(i=0; ch[i]!='\0'; i++)
    {
        ch[i]=toupper(ch[i]);
        
    }
    puts(ch);


    for(i=0; ch[i]!='\0'; i++)
    {
        if(isdigit(ch[i]))
        {
            printf("%c",ch[i]);
        }
    }
}