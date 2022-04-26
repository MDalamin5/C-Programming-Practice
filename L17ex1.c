#include<stdio.h>
struct student
{
    char name[50];
    int id;
    float CGPA;
};

struct student s[2];
int main()
{
    int i;
    printf("\n Enter student informations\n\n");
    for(i=0; i<2; i++)
    {
        printf("\nEnter student %d Name: ",i+1);
        gets(s[i].name);
        printf("Enter student %d ID: ",i+1);
        scanf("%d",&s[i].id);
        printf("Enter student %d CGPA: ",i+1);
        scanf("%f",&s[i].CGPA);
        fflush(stdin);

    }
        printf("\nThe higher CGPA student is: \n");
        if(s[0].CGPA >s[1].CGPA)
        {
            printf("Name: ");
            puts(s[0].name);
            printf("ID: %d",s[0].id);

        }
        else if(s[0].CGPA<s[1].CGPA)
        {
            printf("Name: ");
            puts(s[1].name);
            printf("ID: %d",s[1].id);

        }

        else{
            printf("Both CGPA same or invalid input");
        }
}

