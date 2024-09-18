#include <stdio.h>

int main() {
    int b,h;
    printf("enter height of triangle:\n");
    scanf("%d",&h);
    printf("enter base of triangle:\n");
    scanf("%d",&b);
    
    int a=(b*h)/2;
    printf("the area of triangle is %d",a);

    return 0;
}
