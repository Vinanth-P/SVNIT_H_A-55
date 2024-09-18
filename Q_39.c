#include<stdio.h>

int main()
{
    int a,b,c,d,n;
    printf("enter the value of n: ");
    scanf("%d",&n);

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        printf("%d/%d! + ",i,i);
    }
}