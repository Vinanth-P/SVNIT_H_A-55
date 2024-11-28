
#include<stdio.h>
#include<string.h>


int main()
{
    FILE *file;
    char ch;
    file=fopen("any.txt","r");
    int vowel=0,characters=0,words=0,line=0;
    while ((ch=fgetc(file))!=EOF)
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u')
        {
            vowel++;
        }
        if(ch==' '){
        words++;
        }

        if(ch=='\n'){
        line++;
        }

        characters++;

    }
    printf("number of vowels=%d\n",vowel);
    printf("number of words=%d\n",words);
    printf("number of characters=%d\n",characters);
    printf("number of lines=%d\n",line);
    
}