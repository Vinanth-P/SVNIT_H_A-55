#include<stdio.h>
int main()
{
    int arr[10],temp;
    printf("enter 10 elements:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("bubble sorted array:");

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }

    }
    for(int i=0;i<10;i++)
    {
        printf("%d|",arr[i]);
    }
}