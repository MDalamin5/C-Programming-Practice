#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("size of int = %d bytes\n",sizeof(i));
    printf("size of float = %d bytes\n",sizeof(f));
    printf("size of double = %d bytes\n",sizeof(d));
    printf("size of char = %d bytes",sizeof(c));
}