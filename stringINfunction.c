#include<stdio.h>
#include<string.h>
void display();
int main()
{
    char str1[20]={"Hello"};
    char str2[20]={"Alamin"};

    display(str1,str2);
}

void  display(char s1[],char s2[])
{
    int i,len=0;

    for(i=0; s1[i]!='\0'; i++)
    {
        len= len+ 1;
        
    }
    s2[0]='A';
    printf("%s %s",s1,s2);
    printf("\n%d",len);
}
