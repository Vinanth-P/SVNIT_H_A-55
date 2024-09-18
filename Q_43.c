#include<stdio.h>
int main()
{
    int n,comission;
    printf("enter sales amount: ");
    scanf("%d",&n);

    if(n<=500)
    comission=0.05*n;

    if(n>500 && n<=2000)
    comission=(35)+(n-500)*0.1;

    if(n>2000 && n<=5000)
    comission=(185)+(n-2000)*0.12;

    if(n>5000)
    comission=0.125*n;

    printf("the comisssion is %d",comission);
}