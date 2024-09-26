#include<stdio.h>

int main()
{
    int arr_a[9],arr_b[9],arr_c[19],temp;

    printf("enter elements of array a:\n");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr_a[i]);
    }

    printf("sorted array a:\n");
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(arr_a[j]>arr_a[j+1])
            {
                temp=arr_a[j+1];
                arr_a[j+1]=arr_a[j];
                arr_a[j]=temp;
            }
        }

    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d|",arr_a[i]);
    }

    printf("\nenter elements of array b:\n");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr_b[i]);
    }
    printf("sorted b:\n");
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(arr_b[j]>arr_b[j+1])
            {
                temp=arr_b[j+1];
                arr_b[j+1]=arr_b[j];
                arr_b[j]=temp;
            }
        }

    }
    for(int i=0;i<10;i++)
    {
        printf("%d|",arr_b[i]);
    }
    //c
    for(int i=0;i<10;i++)
    {
        arr_c[i]=arr_a[i];
        arr_c[i+10]=arr_b[i];

    }
    printf("\n\narray c is:\n");
    for(int i=0;i<19;i++)
    {
        printf("%d|",arr_c[i]);
    }

    printf("\nsorted array c:\n");
    for(int i=0;i<18;i++)
    {
        for(int j=0;j<18-i;j++)
        {
            if(arr_c[j]>arr_c[j+1])
            {
                temp=arr_c[j+1];
                arr_c[j+1]=arr_c[j];
                arr_c[j]=temp;
            }
        }

    }
    for(int i=0;i<19;i++)
    {
        printf("%d|",arr_c[i]);
    }

}