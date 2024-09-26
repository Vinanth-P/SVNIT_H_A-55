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
    int a=0,b=0;

    for(int k=0;k<10;k++)
    {
        
        num3[k]=num1[a]+num2[b];
        printf("%d\n",num3[k]);
        a++;
        b++;
            
    }
    

}