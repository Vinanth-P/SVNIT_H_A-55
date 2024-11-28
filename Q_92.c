#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("enter the array  elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);

    }
    printf("entered array:");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
        
    }
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max < *(arr+i))
        {
            max = *(arr+i);
        }
    }
    printf("\nmax value=%d",max);


}