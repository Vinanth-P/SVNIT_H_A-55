#include<stdio.h>

int main()
{
    int n;
    printf("enter the number for table:");
    scanf("%d",&n);

    int product=1;
    int i=1;

    while(i<11)
    {
        product=n*i;
        printf("%d x %d = %d\n",n,i,product);
        i++;
    }

}