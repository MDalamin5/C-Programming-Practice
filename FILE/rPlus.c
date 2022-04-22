#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    char str[10];
    printf("Enter string: ");
    gets(str);
    fputs(str,fp);

    fclose(fp);

}