#include<stdio.h>
#include<string.h>
#include<ctype.h>
void changecase();
int main()
{
    char str[30];
    printf("Enter your string: ");
    gets(str);
    changecase(str);
    
}

void changecase(char s[])
{
    for(int i=0; s[i] != '\0'; i++)
    {
        if(isupper(s[i]))
        {
            s[i]= tolower(s[i]);
        }
        else if(islower(s[i]))
        {
            s[i]= toupper(s[i]);
        }
    }
    puts(s);
}