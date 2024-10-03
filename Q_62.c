#include<stdio.h>
int main()
{
    int num1[10];
    printf("ENTER THE NUMBERS  [ _SET-1_]:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&num1[i]);
    }
    printf("reversed array :\n");
    for(int i=9;i>=0;i--)
    {
    printf("%d\n",num1[i]);
    }
}