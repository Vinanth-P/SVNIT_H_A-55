#include<stdio.h>
int check(int n)
{
    int flag=1;
    

    for(int i=2;i<n/2 && flag!=0;i++)
    {
        if(n%i==0){
        flag=0;
        return 0;
        }

        if(flag==1)
        return 1;
    }
}
int main()
{
    int x,result;
    printf("enter a number:");
    scanf("%d",&x);
    result=check(x);
    printf("%d",result);
    
}