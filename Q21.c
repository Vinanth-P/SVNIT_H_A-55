//calculator
#include<stdio.h>

int main()
{
    int a,b,c;
    char operator;
    printf("enter the operator you want to perform(+,-,/,*):");
    scanf("%c",&operator);
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);

    switch(operator)
    {
        case '+':c=a+b;
        break;
        case '-':c=a-b;
        break;
        case '*':c=a*b;
        break;
        case '/':c=a/b;
        break;
        default: printf("invalid");

    }
    printf("answer=%d",c);
