#include <stdio.h>

int main() {
    int num1,num2,num3,max;
    printf("enter num1:\n");
    scanf("%d",&num1);
    printf("enter num2:\n");
    scanf("%d",&num2);
    printf("enter num3:\n");
    scanf("%d",&num3);
    
    max=num1>num2?num1:num2 &&num2>num3?num2:num3;
    
    printf("the greatest number is %d",max);

    return 0;
}
