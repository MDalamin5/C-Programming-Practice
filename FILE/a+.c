#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    FILE *fq=NULL;
    char ch;

    fp=fopen("abc.txt","a+");
    fq=fopen("abc.txt","a+");
    if(fp==NULL)
    {
        printf("Error");
    }
    char str[20];
    printf("Enter string: ");
    gets(str);
    fputs(str,fp);
    fclose(fp);
 rewind(fq);
    while(!feof(fq))
    {
        ch = getc(fq);
        printf("%c",ch);
    }
    fclose(fq);
}