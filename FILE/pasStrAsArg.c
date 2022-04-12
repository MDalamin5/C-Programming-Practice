#include<string.h>
#include<ctype.h>
#include<stdio.h>
void ToupperTolower(char ch[]);
int main()
{
    char str[40];
    printf("Enter Your string: ");
    gets(str);
    ToupperTolower(str);
    
}
void ToupperTolower(char ch[])
{
    int i;
    for(i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            ch[i]=tolower(ch[i]);
        }
       else if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=toupper(ch[i]);
        }
    }
puts(ch);
   
}