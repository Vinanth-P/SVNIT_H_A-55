#include<stdio.h>

int main()
{
    int n,a;
    printf("enter a number:");
    scanf("%d",&n);

    a=n%9;
    printf("single digit answer showing sum of digits of n is:%d",a);
    return 0;
    }