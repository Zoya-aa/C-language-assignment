#include <stdio.h>

int calculateChecksum(int transactionID){
    int sum=0;

    if(transactionID<10){
        return transactionID;
    }

    while(transactionID>0){
        sum = sum+transactionID%10;
        transactionID = transactionID/10;
    }

    return calculateChecksum(sum);
}

int main(){
    int id, result;

    printf("Enter Transaction ID: ");
    scanf("%d", &id);

    result=calculateChecksum(id);

    printf("Digital Root: %d", result);

    return 0;
}

