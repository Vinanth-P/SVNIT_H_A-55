#include<stdio.h>
int main()
{
    int n,a;
    char b;
    printf("enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        b=printf("%d,  ",i);
        
    }
    printf("%d = %c",n,b);
}