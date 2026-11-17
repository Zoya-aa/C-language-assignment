#include <stdio.h>

int main(){
    char name[50];
    int acc;
    float amount;

    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter account number: ");
    scanf("%d", &acc);

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    FILE *fptr = fopen("bank_log.txt", "a");

    if(fptr==NULL){
        printf("Error opening file! \n");
        return 1;
    }

    fprintf(fptr, "Name: %s, Account: %d, Amount: %.2f \n", name,acc,amount);
    fclose(fptr);

    printf("Transaction logged successfully \n");

    return 0;
}
