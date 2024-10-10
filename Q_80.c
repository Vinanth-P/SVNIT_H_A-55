#include<stdio.h>

void fibanocci(int x)
{
    int a=0,b=1,c,temp;
    
    for(int i=0;i<x;i++)
    {
        if(i==0){
        printf("%d\n",a);
        continue;
        }
        if(i==1){
        printf("%d\n",b);
        continue;
        }
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        c=0;
    }
}
int main()
{
    int n;
    printf("enter the value of n for first n fibanocci series:");
    scanf("%d",&n);
    fibanocci(n);


}