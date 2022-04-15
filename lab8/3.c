// wap to create the structure item with members as itemid, name,price,quantity and discount.
// Get user input for 3 structure variables, calculate total and print the screen

#include <stdio.h>
struct total
{
    float totalAmount;
};
struct item
{
    char name[20];
    int itemid;
    float price;
    int quantity;
    float discount;
    float finalAmount;
    struct total all;
};
int main()
{
    int n, i;
    struct item items;
    items.discount = 5;
    printf("How many items do you want? \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the itemName: ");
        scanf("%s", items.name);
        printf("Enter item id: \n");
        scanf("%d", &items.itemid);
        printf("Enter the price: ");
        scanf("%f", &items.price);
        printf("Enter the quantity: ");
        scanf("%d", &items.quantity);
        items.all.totalAmount = items.quantity * items.price;
        items.finalAmount = items.all.totalAmount - items.discount;
        // printf("|------------------------------------------BILL-------------------------------------------------|\n");
        // printf("|\t\t\tItem\tItemId\tPrice\tQuantity\tDiscount\ttotal\t\t\t\t\t|\n");
        // printf("|\t\t\t%s\t%d\t%0.2f\t %d \t\t%0.2f\t\t%0.2f\t\t\t\t\t|\n", items.name, items.itemid, items.price, items.quantity, items.discount, items.finalAmount);
        // printf("|-----------------------------------------------------------------------------------------------|\n");
    }
    for (i = 0; i < n; i++)
    {
        printf("|------------------------------------------BILL--------------------------------------------------|\n");
        printf("|\t\t\tItem\tItemId\tPrice\tQuantity\tDiscount\ttotal\t\t\t\t\t|\n");
        printf("|\t\t\t%s\t%d\t%0.2f\t %d \t\t%0.2f\t\t%0.2f\t\t\t\t\t|\n", items.name, items.itemid, items.price, items.quantity, items.discount, items.finalAmount);
        printf("|-----------------------------------------------------------------------------------------------|\n");
    }
    return 0;
}
