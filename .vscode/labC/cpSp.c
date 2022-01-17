// wap to determine profit and loss and also find out how much profit and loss was made.

# include <stdio.h>
int main()
{
    int profit,loss,sp,cp;
    printf("Enter selling price:\n");
    scanf("%d",&sp);
    printf("Enter cost price\n");
    scanf("%d",&cp);
    profit = sp - cp;
    loss = cp - sp;
    (sp>cp)?printf("The seller made profit, so profit is %d\n",profit): // condition to print if profit
    (cp>sp)?printf("The seller beared loss, so loss is %d\n",loss): // condition to print if loss
    printf("Sp = Cp so neither profit nor loss was made\n"); // condition to print if sp = cp
    return 0;
}

