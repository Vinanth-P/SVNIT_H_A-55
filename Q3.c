// Gross Salary=Basic Salary+Allowances+Bonuses−Deductions
#include <stdio.h>

int main() {
    int bs,b,a,d,gs;
    printf("enter basic salary:\n");
    scanf("%d",&bs);
    printf("enter allowances:\n");
    scanf("%d",&a);
    printf("enter bonuses:\n");
    scanf("%d",&b);
    printf("enter deductions:\n");
    scanf("%d",&d);
    
    gs=bs+b+a-d;
    printf("the gross salary is %d",gs);
    
    

    return 0;
}
