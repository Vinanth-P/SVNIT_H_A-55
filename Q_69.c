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
    int search,flag;
    printf("enter the number you want to search:");
    scanf("%d",&search);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("number %d is at position %d",search,i+1);
            flag=1;
            break;
        }
        else
        flag=0;
    }
    if (flag==0)
    {
        printf("number not found");
    }
    
    return 0;
}