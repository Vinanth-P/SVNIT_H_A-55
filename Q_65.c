//transpose of matrix

#include<stdio.h>
int main()
{
    int arr[3][3],temp[3][3];
     printf("enter the matrix elements:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nthe entered matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
            
        }
        printf("\n");
    }

    //transposing

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            temp[i][j]=arr[j][i];

        }
    }

     printf("\nthe transpose of the matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",temp[i][j]);
            
        }
        printf("\n");
    }
    
}