#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,y,c=0,a,digit;
    printf("enter a number:");
    scanf("%d",&n);

    x=n;
    a=n;
    while(x!=0)
    {
        x=x/10;
        c++;
    }
    printf(" number of digits : %d\n",c);

    int sum=0;
    
    y=n;

    while(y!=0)
    {
         digit=y%10;
         sum=sum+(int)pow(digit,c);
         y=y/10;

    }
    printf("sum=%d",sum);
    
    if(a==sum)
        printf("the number %d is armstrong number",a);
    else
        printf("the number %d is not an armstrong number",a);

    return 0;


    
 }