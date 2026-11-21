#include <stdio.h>

struct Product{
    int id;
    char name[30];
    char category[30];
    float price;
    int stock;
};

void displayProductDetails(struct Product p){
    float discount,finalPrice;

    discount = p.price*0.05;
    finalPrice = p.price-discount;

    printf("\n");
    printf("Product Details \n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Available Stock: %d\n", p.stock);
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);
}

int main(){
    struct Product p1 = {101,"Laptop","Electronics", 100000,10};

    displayProductDetails(p1);

    return 0;
}

