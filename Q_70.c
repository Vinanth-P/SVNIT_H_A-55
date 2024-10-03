#include<stdio.h>
int main()
{
    int n;
    printf("how many numbers do u want to enter:");
    scanf("%d",&n);
    int arr[n-1];

    printf("enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int search,count=0;
    printf("enter the number you want to search:");
    scanf("%d",&search);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            count++;
        }
    }
    if(count>0)
    printf("the number of times %d occured is %d",search,count);
    else
    printf("the number of times %d occured is 0",search);
    
    return 0;
}