#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%D",&n);

    int product=1;
    int i=1;

    while(i<=n)
    {
        product=i*i;
        printf("%d , ",product);
        i++;
    }
}