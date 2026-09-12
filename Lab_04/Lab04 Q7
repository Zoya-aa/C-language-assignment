#include <stdio.h>
int main(){
    float data,price;
	float basic_cost,discount_amount,discount_percent,final_cost;
	
	printf("Enter data_used in GB:");
	scanf("%f",&data);
	printf("Enter price per GB:");
	scanf("%f",&price);
	basic_cost=data*price;
	
	if(data<50){
		printf("discount_percent=0");
	}	
	else if(data>=50 && data<=99){
		printf("discount_percent=5");
	}
	else if(data>=100 && data<=199){
		printf("discount_percent=10");
	}
	else{
		printf("discount_percent=15");
	}
	discount_amount=(basic_cost*discount_percent)/100;
	final_cost=basic_cost-discount_amount;
	return 0;
}
	
	
