//print sum of odd and even from 1 to n

#include<stdio.h>

int main()
{
    int n;

    printf("enter the value of n to print sum of odd and even from 1 to n:");
    scanf("%d",&n);

    int i=0;
    int sum_even=0;
    int sum_odd=0;

    while(i<=n)
    {
        if(i%2==0)
        {
            sum_even=sum_even+i;
            i++;
            
        }
        else
        {
            sum_odd=sum_odd+i;
            i++;
            
            
        }
    }
    printf("sum of all even numbers=%d\n",sum_even);
    printf("sum of all odd numbers=%d\n",sum_odd);

    
    return 0;
}