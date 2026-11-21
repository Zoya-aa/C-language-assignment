#include <stdio.h>

struct Item{
    int id;
    char name[30];
    int quantity;
    float unitPrice;
};

void displayItem(struct Item items[],int id){
    int i,found=0;

    for(i=0; i<5; i++){
        if(items[i].id==id){
        	printf("\n");
            printf("Item Found! \n");
            printf("ID: %d\n", items[i].id);
            printf("Name: %s\n", items[i].name);
            printf("Quantity: %d\n", items[i].quantity);
            printf("Unit Price: %.2f\n", items[i].unitPrice);

            found = 1;
            break;
        }
    }

    if (found==0){
    	printf("\n");
        printf("Item not found!");
    }
}

int main(){
    struct Item items[5];
    int i,searchID;
    float total=0;

    for (i=0; i<5; i++){
    	printf("\n");
        printf("Enter details of item %d\n", i+1);

        printf("Enter ID: ");
        scanf("%d", &items[i].id);

        printf("Enter Name: ");
        scanf("%s", items[i].name);

        printf("Enter Quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Enter Unit Price: ");
        scanf("%f", &items[i].unitPrice);

        total = total + (items[i].quantity*items[i].unitPrice);
    }
    printf("\n");
    printf("Total Inventory Value: %.2f\n", total);
    
    printf("\n");
    printf("Enter Item ID to search: ");
    scanf("%d", &searchID);

    displayItem(items, searchID);

    return 0;
}

