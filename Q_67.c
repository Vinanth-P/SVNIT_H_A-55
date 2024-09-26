#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],arr3[3][3];
     printf("enter the matrix1 elements:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("\nthe entered matrix 1 is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr1[i][j]);
            
        }
        printf("\n");
    }
    
    printf("enter the matrix 2 elements:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\nthe entered matrix 2 is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr2[i][j]);
            
        }
        printf("\n");
    
    }

    //addition
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j]-arr2[i][j];
            
        }
    
    }

    printf("the sum of two matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr3[i][j]);
            
        }
        printf("\n");
    
    }
}