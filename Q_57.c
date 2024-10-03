// #include<stdio.h>

// int main()
// {
//     int n,max=0,second_max=0;
//     printf("HOW MANY NUMBERS DO U WANT TO ENTER:");
//     scanf("%d",&n);

//     printf("ENTER %d NUMBERS :\n",n);
//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i]>max)
//         {   
//             second_max=max;
//             max=arr[i];
//         }
//         else if(arr[i]<max && arr[i]>second_max){
//         second_max=arr[i];
//         }
//     }
//     printf("max= %d ",max);
//     printf("second max= %d",second_max);
// }
#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=i-1;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}