//factorialof a number
#include<stdio.h>

int main()
{
    int n,product;
   printf("enter n:");
   scanf("%d",&n);
   
   int i=1;
   product=1;

   while(i<=n)
   {
    product=product*i;
    i++;
    
   }
   printf("n factorial is %d",product);

   return 0;


}
