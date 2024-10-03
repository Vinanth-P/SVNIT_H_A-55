#include<stdio.h>

int main()
{
    int arr[10],position;

    printf("enter elements of array :\n");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position to be rotated:");
    scanf("%d",&position);
    printf("\nrotated array:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[(i+position)%10]);
    }
    
}