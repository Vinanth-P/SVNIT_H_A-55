#include<stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    

    for(int i=0;i<=n;i++)
    {
        if(i%2==1)
        printf("%d , ",i);
        
    }
}