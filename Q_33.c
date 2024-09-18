#include<stdio.h>

int main()
{
    int n,num,max,min;
    printf("how many numbers do u want to enter:");
    scanf("%d",&n);

    printf("enter num1 : ");
    scanf("%d",&num);
    max=min=num;

    for(int i=2;i<=n;i++)
    {
        printf("enter num%d : ",i);
        scanf("%d",&num);

        if(num>max)
        {
            max=num;
        }
        else if(num<min)
        min=num;
        
    }
    printf("max number is %d\n",max);
    printf("min number is %d",min);
}