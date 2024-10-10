#include<stdio.h>

int check(int a)
{   
   int x,y,sum=0;
   y=a;
   while(y!=0)
   {
    x=y%10;
    sum=sum*10+x;
    y=y/10;
   }
   if(sum==a)
   printf("the number %d is a palindrome",a);
   else
   printf("the number %d is not a palindrome",a);
}
int main()
{   
    int n,result;
    printf("enter a number:");
    scanf("%d",&n);
    check(n);
}