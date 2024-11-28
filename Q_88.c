#include<stdio.h>

int main()
{
    int a[5]={1,2,3,4,5},b[5];
    int *c=a;
    int *d=b;
    for(int i=0;i<5;i++)
    {
        *(d+i)=*(c+i);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }

}