#include<stdio.h>

int main()
{
    int arr[3][3],max,min;
    printf("ENTER MATRIX ELEMENTS:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nThe entered  matrix is:\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
            
        }
        printf("\n");
    }
    max=min=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            max=arr[i][j];

            if(arr[i][j]<min)
            min=arr[i][j];
        }
    }
    printf("\nMAX ELEMENT= %d\n",max);
    printf("MIN ELEMENT= %d",min);

}