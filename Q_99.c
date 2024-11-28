
#include<stdio.h>
#include<string.h>


int main()
{
    FILE *file;
    char ch;
    file=fopen("any.txt","r");
    int count=0;
    while ((ch=fgetc(file))!=EOF)
    {
        if(ch='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
    }
    printf("number of vowels=%d",count);
    
}