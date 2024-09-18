#include<stdio.h>

int main()
{
    int s,m,h,d,hours,minutes;
    printf("enter time in seconds:\n");
    scanf("%d",&s);
    m=s/60;
    h=s/60;
    d=h/24;
    hours=h%60;
    minutes=m%60;
    
    printf("\nthe time is %d days %d hours %d minutes",d,hours,minutes);
    
}
