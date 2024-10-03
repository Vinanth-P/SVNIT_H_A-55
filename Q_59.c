#include<stdio.h>
int main()
{
    int num1[10],j=0,num2[10],num3[10];
    printf("ENTER THE NUMBERS  [ _SET-1_]:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&num1[i]);
    }

    printf("ENTER THE NUMBERS  [ _SET-2_]:\n");

    for(int j=0;j<10;j++)
    {
        scanf("%d",&num2[j]);
    }

    for(int i=0;i<10;i++)
    {
        num3[i]=num1[i];
        num1[i]=num2[i];
        num2[i]=num3[i];
    }

    printf("swapped arrays:\n");

    printf("set-1 :\n");

    for(int i=0;i<10;i++)
    {
        printf("%d\n",num1[i]);
    }

    printf("set-2 :\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",num2[i]);
    }
    
      
    
}