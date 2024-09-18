#include<stdio.h>
int main()
{
    int n,max=0,second_max=0,num;
    printf("enter number of element:");
    scanf("%d",&n);

    printf("enter %d numbers:",n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num);

        if(num>max)
        {
            second_max=max;
            max=num;
        }
        else if(num<max && num>second_max)
        {
            second_max=num;
        }
    }
    printf("highest number is %d\n",max);
    printf("second highest number is %d",second_max);
}