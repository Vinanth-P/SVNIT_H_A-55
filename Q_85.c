#include<stdio.h>
char check(char c)
{
    if(c=='a'||'e'||'i'||'o'||'u')
    printf("the given character is a vowel");
    else
    printf("the given character is not vowel");
}
int main()
{
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    check(c);
}
