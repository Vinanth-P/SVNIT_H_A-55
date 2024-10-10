#include<stdio.h>
#include<math.h>
void check(int a)
{
    int y,x,sum=0,count=0;
    y=a;
    while(y!=0)
    {
        y=y/10;
        count++;
    }
    y=a;
    while(y!=0)
    {
        x=y%10;
        sum=sum+(int)pow(x,count);
        y=y/10;
    }
    if(sum==a)
    printf("the number %d is an armstrong number",a);
    else
    printf("the number %d is not an armstrong number",a);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    check(n);
    return 0;

}