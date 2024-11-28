#include<stdio.h>

int main()
{
    char str[30];
    printf("enter string:\n");
    gets(str);
    char *a=str;
    
    int count=0,count0=0;
    while(*a!=0)
    {
        if(*a!=' ')
        {
        count0++;
        }
        count++;
        *a++;

    }
    printf("length of string(including spaces)=%d\n",count);
    printf("length of string(excluding spaces)=%d",count0);
}