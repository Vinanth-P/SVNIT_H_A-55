#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5;
    printf("enter m1:\n");
    scanf("%d",&m1);
    printf("enter m2:\n");
    scanf("%d",&m2);
    printf("enter m3:\n");
    scanf("%d",&m3);
    printf("enter m4:\n");
    scanf("%d",&m4);
    printf("enter m5:\n");
    scanf("%d",&m5);
    
    int t=m1+m2+m3+m4+m5;
    printf("total marks is %d\n",t);
    float p=t/5;
    printf("your percentage is %f",p);

    return 0;
}
