
#include <stdio.h>

int main() 
{
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    
    if(a>b && a>c)
    printf("the greatest number is %d",a);
    if(b>a && b>c)
    printf("the greatest number is %d",b);
    if(c>a && c>a)
    printf("the greatest number is %d",c);

    return 0;
}
