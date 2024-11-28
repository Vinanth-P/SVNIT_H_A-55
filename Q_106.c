#include<stdio.h>

struct item
{
    char item_name[20];
    int quantity;
    int price;
    int amount;
};

void calculate_amount(struct item *i)
{
    printf("enter item name:");
    fgets(i->item_name,sizeof(i->item_name),stdin);
    printf("enter quantity:");
    scanf("%d",&i->quantity);
    printf("enter price:");
    scanf("%d",&i->price);
    i->amount=(i->price)*(i->quantity);
    printf("\nAmount=%d",i->amount);
}

int main()
{
    struct item i1;
    calculate_amount(&i1);
    
    
}
