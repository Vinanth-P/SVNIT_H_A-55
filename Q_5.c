#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    
    printf("before swapping\n");
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    
    c=a;
    a=b;
    b=c;
    
    printf("before swapping\n");
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    

    return 0;
}
