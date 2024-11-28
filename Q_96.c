#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{   
    char *sname[10];
    int n;
    printf("enter number of students:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        sname[i]=(char*)malloc(20*sizeof(char));
    }
    printf("enter the students name:\n");
    for(int i=0;i<n;i++)
    {
        gets(sname[i]);
    }
        char *temp;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(sname[i],sname[i+1]>0))
            {
            //     char *temp=sname[i];
            //     sname[i]=sname[i+1];
            //     sname[i+1]=temp;
            
                strcpy(temp,*sname[i]);
                strcpy(*sname[i],*sname[i+1]);
                strcpy(*sname[i+1],temp);
                
            }
        }
    

    printf("sorted:\n");
        for(int i=0;i<n;i++)
    {
        puts(sname[i]);
    }

}