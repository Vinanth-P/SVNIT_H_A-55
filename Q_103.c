#include<stdio.h>

#define macro(a,b) (a>b?a:b)

int main()
{
    int a,b,largest;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    largest=macro(a,b);
    printf("largest=%d",largest);
}