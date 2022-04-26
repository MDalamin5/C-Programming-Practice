#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{

    char str[20] = "Hello how are you?";
    int arr[100] = {0};

    int i;
    for (i=0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
    for(i=0; str[i] != '\0'; i++){
        arr[str[i]]++;
    }

    for(i=0; i<100; i++){
        if(arr[i] > 0 && (i>=65 && i<= 90)){
            printf("%c/%c: %d ",tolower(i), i, arr[i]);
        }
    }

}