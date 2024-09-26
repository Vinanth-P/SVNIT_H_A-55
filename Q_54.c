#include<stdio.h>

int main()
{
    int num[10];
    printf("ENTER THE NUMBERS:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("your numbers are");
     int sum=0;

     for(int i=0;i<10;i++)
     {
        sum=sum+num[i];
     }
     printf("the sum of numbers is: %d",sum);
}