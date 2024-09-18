#include<stdio.h>
#include<math.h>

int main()
{
    int n,y,c=0,x,a;
    printf("enter a number:");
    scanf("%d",&n);

    y=n;
    a=n;
    int sum=0;

    while(y!=0)
    {
        x=y%10;
        sum=sum*10+x;
        c++;
        y=y/10;
    }
    if(a==sum)
    printf("the number %d is palindrome",a);

    else
    printf("the number %d is not palindrome",a);

}