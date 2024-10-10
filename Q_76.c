#include<stdio.h>

void check(int a)
{
    if(a%2==0)
    printf("the number is even");

    else
    printf("the nubmber is odd");
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    check(n);
}