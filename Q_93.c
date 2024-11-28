#include<stdio.h>

int main()
{
    char str[30];
    printf("enter the string:\n");
    gets(str);
    char *ptr=str;
    int count=0;
    while(*ptr!='\0')
    {
        if(*ptr==' '){
        count++;
        }
        ptr++;
    }
    printf("number of words=%d",count+1);
}