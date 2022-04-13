#include<stdio.h>
int main()
{
    int age;
    char name[20];
    FILE*infile;
    
    infile= fopen("info.txt", "w");
    printf("Enter name and age: ");
    scanf(" %s %d", name,&age);

    fprintf(infile," %s,  Age: %d",name,age);
    fclose(infile);

    infile=fopen("info.txt", "r");
    fscanf(infile, "%s" "%d", name, &age);
    printf("%s  Age= %d",name,age);
    fclose(infile);

}