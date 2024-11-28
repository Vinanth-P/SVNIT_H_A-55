#include<stdio.h>
#include<string.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    FILE *file;
    struct student s;
    int n;
    file=fopen("LNMIITSTUDENT.TXT","w");
    if(file==NULL)
    {
        printf("error");
    }
    printf("enter the number of students :");
    scanf("%d",n);

    for(int i=0;i<n;i++)
    {
        printf("\nenter the details of student %d",i+1);
        printf("\nroll number :");
        scanf("%d",&s.roll_no);
        printf("name:");
        gets(s.name);
        printf("marks :");
        scanf("%f",&s.marks);
        fprintf(file,"%d  %s  %f",s.roll_no,s.name,s.marks);
    }
    fclose(file);
    printf("\ndone");
    
}