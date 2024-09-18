#include<stdio.h>
#include<math.h>

int main()
{
     float n,x,y;
    printf("enter the value of n:\n");
     scanf("%d",&n);

    printf("enter the value of x:\n");
    scanf("%d",&x);

    if(n==1){
        y=1+x;
    }
    if(n==2){
        y=1+(x/n);
    }
    if(n==3){
        y=1+pow(x,n);
    }
    if(n>3 || n<1){
        y=1+n*x;
    }

    printf("%d",y);

    return 0;

        


}