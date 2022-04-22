#include<stdio.h>
#include<string.h>
int main()
{
     FILE*inp;
    FILE*oupt;
    int in_stutus;
    double item;

    inp= fopen("data.txt", "r");
    oupt= fopen("pastdata.txt", "w");
    if(inp== NULL){
        printf("Data.txt file does not exists");
    }

    in_stutus=fscanf(inp, "%lf",&item);

    while(in_stutus!=EOF)
    {
        fprintf(oupt, "%lf\n",item);
        in_stutus= fscanf(inp, "%lf",&item);
    }
    fclose(inp);
    fclose(oupt);
    printf("New File crate susscefully");

    return 0;

}