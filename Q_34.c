#include<stdio.h>

int main()
{
    
    int c,n;

    printf("enter till how many numbers:\n");
    scanf("%d",&n);

    int a=0;
    int b=1;

    printf("%d , %d ,",a,b);

    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d, ",c);
        a=b;
        b=c;

    }
}   