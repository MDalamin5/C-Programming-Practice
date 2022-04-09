
#include<stdio.h>

#include<string.h>
int main()
{
    int i;
    char name[49];
    printf("Enter your string: ");
    gets(name);
    for(i=0; name[i]!=0; i++ )
    {
        if(name[i]>='A' && name[i]<='Z'){
            name[i]= name[i]+32;
        }
    }

    int stringLength= strlen(name);

    for(i=0; i<=stringLength-1; i++)
    {
        printf("%c, ",name[i]);
    }
    
}


