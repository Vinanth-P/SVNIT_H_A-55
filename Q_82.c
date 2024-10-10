#include<stdio.h>
int factorial(int n)
{
    int product=1;
    for(int i=1;i<=n;i++)
    {
        product=product*i;
    }
    return product;
}

int main()
{
    int n,r;
    float result;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    printf("NCR=");
    result=factorial(n)/(factorial(n-r)*factorial(r));
    printf("%f",result);

}