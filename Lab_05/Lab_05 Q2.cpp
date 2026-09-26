#include <stdio.h>
int main() {
	int age,credit_score;
	float income;
	int existing_loan;
	
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter income: ");
	scanf("%f", &income);
	printf("Enter credit_score: ");
	scanf("%d", &credit_score);
	printf("Enter existing loan(1=yes,0=no): ");
	scanf("%d", &existing_loan);
	
	if(age>=21 && income>=100000 && credit_score>=750 && existing_loan==0){
		printf("High Approval Chance");
	}
	else if(age>=21 && income>=75000 && credit_score>=650 && existing_loan==1){
		printf("Manual Review");
	}
	else if(age>=21 && income>=50000 && credit_score>=600){
		printf("Possibly Eligible ");
	}
	else{
		printf("Rejected");
	}
	return 0;
}
