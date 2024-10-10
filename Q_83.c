#include<stdio.h>

int max(int arr[])
{
    int max=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;

}
int main()
{
    int arr[10],x;
    printf("enter 10 elements:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    x=max(arr);
    printf("max value=%d",x);
}