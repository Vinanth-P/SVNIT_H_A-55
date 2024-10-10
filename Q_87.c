#include<stdio.h>
int check(int arr[])
{
    for(int i=0;i<10;i++)
    {
        if(arr[i]>500)
        {
            printf("student%d = %d\n",i+1,arr[i]);
        }
    }
}
int main()
{
    int arr[10];
    printf("\n\nenter marks of students:\n");
    for(int i=0;i<10;i++)
    {
        printf("student%d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("students with marks>500 are:\n");
    check(arr);
}