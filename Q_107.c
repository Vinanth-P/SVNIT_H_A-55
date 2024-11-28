#include<stdio.h>
#include<math.h>


int reverse(int *n)
{
    int y=*n;
    int x=0;
    while(y!=0)
    {   
        int a=y;
        a=a%10;
        x=10*x+a;
        y=y/10;
    }
    return x;
}
int flip(int num,int n)
{
    int x,y;
    //last n digits
    int c=(pow(10,n));
    y=num % c;
    int b=reverse(&y);
    x=num/pow(10,n);
    int a=x*(pow(10,n))+b;
    return a;
}

int main()
{
    int a=12345;
    int n=3;
    int b=flip(a,n);
    printf("%d",b);

}