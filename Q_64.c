#include<stdio.h>

int main()
{
    int arr[3][3],row=0;
    printf("enter the matrix elements:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nthe entered matric is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
            
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
        row=arr[i][j]+row;
        }
        printf("sum of elemnts of row%d = %d\n",i+1,row);
    }

    

}