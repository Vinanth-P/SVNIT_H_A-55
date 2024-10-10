#include<stdio.h>
void exchange(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("interchanged function:\nx=%d\ny=%d",x,y);
}
int main()
{
    int x,y;
    printf("enter x and y:");
    scanf("%d\n%d",&x,&y);
    exchange(x,y);
}