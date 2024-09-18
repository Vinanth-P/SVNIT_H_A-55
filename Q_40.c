#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int sum=0;

    while(n>0)
    {
        printf("enter num%d : \n",i);
        scanf("%d",&n);
        sum=sum+n;
        i++;
    }
    printf("total sum is %d",sum);
}