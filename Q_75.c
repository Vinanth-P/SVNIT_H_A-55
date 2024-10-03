#include<stdio.h>

int main()
{
    int roll_no[9],subject[2],total_marks=0,highest_marks[9];
    for(int j=0;j<10;j++)
    {
    printf("enter the marks of roll number %d\n",j+1);
    
        for(int i=0;i<3;i++)
        {
            printf("subject %d : ",i+1);
            scanf("%d",&subject[i]);
            total_marks=total_marks+subject[i];
        }
    printf("total marks obtained = %d\n\n",total_marks);
    highest_marks[j]=total_marks;
    total_marks=0;

    }

    int max,flag=0;
    max=highest_marks[0]; 
    for(int i=0;i<10;i++)
    {
        if(highest_marks[i]>max)
        {
        max=highest_marks[i];
        flag=i;
        }
    }
    printf("flag=%d/n",flag);
    printf("highest marks = %d\nroll number = %d",max,flag+1);

    // for(int i=0;i<10;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         if()
    //     }
    // }
}