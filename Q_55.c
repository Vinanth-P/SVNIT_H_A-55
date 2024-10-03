#include<stdio.h>

int main()
{
    int num[10],o=0,e=0;
    printf("enter 10 numbers:");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);

        if(num[i]%2==0)
        e++;

        else
        o++;
    }
    printf("the number of even numbers = %d\n",e);
    printf("the number of odd numbers= %d",o);

}