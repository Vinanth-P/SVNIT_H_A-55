#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *mat1=(int*)malloc(3*3*sizeof(int));
    int *mat2=(int*)malloc(3*3*sizeof(int));
    int *result=(int*)malloc(3*3*sizeof(int));

    printf("enter matrix 1\n");
    for(int i=0;i<9;i++)
    {
        scanf("%d",mat1+i);
    }

    printf("enter matrix 2\n");
    for(int i=0;i<9;i++)
    {
        scanf("%d",mat2+i);
    }
    printf("matrix 1:\n");
    for(int i=0;i<9;i++)
    {
        printf("%d\t",*mat1+i);
        if((i+1)%3==0)
        printf("\n");
    }

}