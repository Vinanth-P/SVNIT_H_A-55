
#include<stdio.h>

int main()
{
int p,r,t;
    printf("enter principal amount:\n");
    scanf("%d",&p);
    printf("enter rate of interst:\n");
    scanf("%d",&r);
    printf("enter time period:\n");
    scanf("%d",&t);
    float s=(p*r*t)/100;
    printf("the simple interst is %f",s);
    return 0;
}