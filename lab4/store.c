# include <stdio.h>
int main()
{
    float vat,noOfHeater, noOfFan,noOfToaster,total,discountAmount,disHeater,disToaster,disFan;
    float discountOnHeater, discountOnFan, discountOnToaster,discountedAmount;
    float perPieceHeater = 1500.00, perPieceToaster = 200.00, perPieceFan = 400.00;
    float dHeater, dFan, dToaster,lastTotalAmt;

    printf("Enter the no of heater you ordered:\n");
    scanf("%f",&noOfHeater);

    printf("Enter the no of Toaster ordered:\n");
    scanf("%f",&noOfToaster);

    printf("Enter the no of fan ordered:\n");
    scanf("%f",&noOfFan);

    // takes out price on the basis of order
    dHeater =  noOfHeater * perPieceHeater ;
    printf("%f is heater\n",dHeater);

    dFan = noOfFan * perPieceFan ;
    printf("%f is fan\n",dFan);

    dToaster = noOfToaster * perPieceToaster;
    printf("%f is toaster\n",dToaster);

    // total without discount
    total = dHeater + dFan + dToaster;
    printf("%f is total price without calculation discount and vat inclusion\n",total);

    // discount on Dheater
    discountOnHeater = (0.05 * dHeater);
    printf("%f is discount on heater\n",discountOnHeater);
    printf("\v");
    //discount on dfan

    discountOnFan = (0.15 * dFan);
    // discount on dToaster    
    discountOnToaster = (0.1 * dToaster);

    disHeater = dHeater - discountOnHeater;
    disFan = dFan - discountOnFan ;
    disToaster =  dToaster - discountOnToaster;
    printf("%f is the discounted amount of heater without vat inclusion\n",disHeater);
    printf("%f is the discounted amount of fan without vat inclusion\n",disFan);
    printf("%f is the discounted amount toaster without vat inclusion\n",disToaster);

    discountedAmount = disHeater + disFan + disToaster;

    vat = (0.13 * discountedAmount);
    lastTotalAmt = discountedAmount + vat ;
    printf("\v");
    printf("%f is the required amount that is to be paid to company\n",vat);
    return 0;
}