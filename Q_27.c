//program to check prime or not
#include<stdio.h>
int main()
{
    int n,flag=1;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=2;i<n/2 && flag!=0;i++)
    {
        if(n%i==0){
        flag=0;
        printf("the number is composite");
        }

        if(flag==1)
        printf("the number is prime");
    }
}