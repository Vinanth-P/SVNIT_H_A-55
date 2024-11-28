#include<stdio.h>
#include<string.h>

int main()
{
    char str[30],str2[30];
    printf("enter the string:\n");
    gets(str);
    char *ptr=str;
    int n=strlen(str);

    for(int i=0;i<n;i++)
    {
        str2[i]=*(ptr+n-i-1);
    }
    str2[n]='\0';
    printf("reversed:\n");
    puts(str2);
}