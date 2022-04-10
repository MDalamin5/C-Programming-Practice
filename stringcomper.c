#include<string.h>
#include<stdio.h>
int main()
{
    char str1[20]={"alamin"};
    char str2[25]={"alamin"};

    int value;

    value = strcmp(str1,str2);

    if(value==0){
        printf("Both are same word");
    }

    else{
        printf("Not are same word.");
    }
}