#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//function for generating bill
void billheader(char name[50], char date[30], char address[50]){
    printf("\n\n");
        printf("\t     Central Region Multipopose Pvt. Ltd. ");
        printf("\n\t --------------------------------------------");
        printf("\nDate: %s", date);
        printf("\nCustomer's Name: %s", name);
         printf("\nAddress: %s", address);
        printf("\n");
        printf("------------------------------------------------\n");
        printf("Items\t\t");
        printf("Qty\t\t");
        printf("Total\t\t");
        printf("\n------------------------------------------------");
        printf("\n\n");
}
void billbody(char item[50], int qty, float price){
    printf("%s\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty * price);
    printf("\n");
}
struct items{
    char item[30];
    float price;
    int qty;
};

struct orders{
    char customer[50];
    char date[50];
    int numofitems;
    struct items itm[50];
};

void billfooter(float total){
    printf("\n");
    float Discount = 0.1*total;
    float GrandTotal = total - Discount;
    printf("------------------------------------------------\n");
    printf("Sub Total \t\t%.2f ", total);
    printf("\nDiscount @10\t\t\t%.2f","%", Discount);
    printf("\n\t\t\t     ----------");
    printf("\n------------------------------------------------");
    printf("\nGrand Total \t\t%.2f ", GrandTotal);
}



int main()
{
    int opt, n;
    struct orders ord;
    //billheader("Ashish Subedi","2022.01.01", "Thankot, Kathmandu");
    //billbody("Paper",10,500);
    //billfooter(500);
    //return 0;

    //dashboard
    printf("\t========= Central Region MultiPropose Pvt. Ltd =========");
    printf("\n\n1.Generate Invoice");
    printf("\n2.Show all Invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");

    printf("\n\n");

    printf("\n\nPlease select your prefered operation :\t");
    scanf("%d", opt);
    printf("\n You have choosen %d", opt);
    fgetc(stdin);
    switch(opt){
        case 1:
        printf("\nCustomer's Name :\t");
        fgets(ord.customer,50,stdin);
        ord.customer[strlen(ord.customer)-1] = 0;
        strcpy(ord.date,__DATE__);
        printf("No. of items :\t");
        scanf("%d", &n);

        for(int i=0; i<n; i++){
            fgetc(stdin);
            printf("\n\n");
            printf("Please enter the item %d", i+1);
            fgets(ord.itm[i].item,30,stdin);
            ord.itm[i].item[strlen(ord.itm[i].item)-1] = 0;
            printf("\nPlease enter the quantity : \t");
            scanf("%d", &ord.itm[i].qty);
            printf("\nPlease enter the unit price : \t");
            scanf("%.2f", &ord.itm[i].price);
        }


    }
    printf("\n\n\n");
return 0;
}