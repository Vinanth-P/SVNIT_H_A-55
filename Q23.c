#include<stdio.h>
int main()
{
    int b,e;
    printf("enter base:");
    scanf("%d",&b);

    printf("enter exponent:");
    scanf("%d",&e);

    int product=1;
    for(int i=1;i<=e;i++)
    {
        product=product*b;
    }

    printf("%d",product);
}