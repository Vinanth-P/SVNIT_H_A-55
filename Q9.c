#include <stdio.h>

int main() {
    int h,m,s;
    printf("enter number of hours:\n");\
    scanf("%d",&h);
    printf("enter number of minutes:\n");\
    scanf("%d",&m);
    printf("enter number of seconds:\n");\
    scanf("%d",&s);
    
    int seconds=h*60*60+m*60+s;
    
    printf("total number of seconds is %d",seconds);
    

    return 0;
}
