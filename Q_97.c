#include<stdio.h>
#include<string.h>


int main()
{
    char str[30];
    char *ptr=str;
    printf("enter the string:\n");
    gets(str);
    int count=0;
        while((*ptr)!='\0')
    {
        switch(*ptr)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            count++;
        }
        ptr++;
    }
    printf("number of vowels=%d",count);

}