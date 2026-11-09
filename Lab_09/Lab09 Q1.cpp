#include <stdio.h>

float calculateDiscount(float amount,char type){
    float discount;

    if(type=='P'){
        discount=20;
    }
    else if(type=='G'){
        discount=10;
    }
    else{
        discount=5;
    }

    if(amount>10000){
        discount=discount+2;
    }
    return amount*discount/100;
}

float calculateFinalBill(float amount){
    float tax,shipping,total;

    tax = amount*15/100;

    if(amount<=5000){
        shipping=300;
    }
    else{
        shipping=0;
    }

    total = amount+tax+shipping;

    return total;
}

int main(){
    float amount,discount,discountedAmount,finalBill;
    char type;

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &type);

    discount = calculateDiscount(amount,type);

    discountedAmount = amount-discount;

    finalBill = calculateFinalBill(discountedAmount);

    printf("Discount Amount: %.2f\n", discount);
    printf("Discounted Amount: %.2f\n", discountedAmount);
    printf("Final Payable Amount: %.2f\n", finalBill);

    return 0;
}
