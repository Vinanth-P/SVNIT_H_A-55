#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    int *b=&a;
    printf("square=%d\n",(*b)*(*b));
    printf("cube=%d",(*b)*(*b)*(*b));
    
}