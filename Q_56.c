int main()
{
    int num[10],p=0,n=0,zero=0;
    printf("enter 10 numbers:\n");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);

        if(num[i]>0)
        p++;

        if(num[i]<0)
        n++;

        if(num[i]==0)
        zero++;
    }

    printf("positive numbers= %d ",p);
    printf("negative numbers= %d ",n);
    printf("number of zeros= %d",zero);
}        