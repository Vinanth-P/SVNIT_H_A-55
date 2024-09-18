#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    
    int y=n,x,sum=0;
    while(y!=0)
    {
        x=y%10;
        sum=sum*10+x;
        
    }
}