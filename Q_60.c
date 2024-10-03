#include<stdio.h>
int main()
{
    int arr[9];
    printf("enter 10 array elements:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array = \n");
    for(int i=0;i<10;i++)
    {
        printf("|%d|",arr[i]);
    }
    printf("\nselection sorted array:\n");
    
}