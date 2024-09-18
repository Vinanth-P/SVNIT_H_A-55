//program to print sum of digits

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    int a=n,sum=0,b;

    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a/=10;
    }
    printf("sum of digits is %d",sum);
}