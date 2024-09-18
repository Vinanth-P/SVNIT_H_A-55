#include<stdio.h>
int main()
{
    int n,amount;
    printf("amount of electricity consumed :");
    scanf("%d",&n);

    if(n>=0 && n<=200)
    amount=n*0.5;

    if(n>=201 && n<=400)
    amount=100+(n-200)*0.65;

    if(n>=401 && n<=600)
    amount=230+(n-400)*0.8;

    if(n>=600)
    amount=425+(n-600)*125;

    printf("amount to be paid : %d",amount);

}