#include <stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter three integers \n");
	scanf("%d %d %d", &num1,&num2,&num3);
	if(num1==num2 && num1==num3){
		printf("All three numbers are equal");
	}
	else if(num1>num2 && num1>num3){
		printf("The greatest number is num1");
	}
	else if(num2>num1 && num2>num3){
		printf("The greatest number is num2");
	}
	else if(num3>num1 && num3>num2){
		printf("The greatest number is num3");
	}
	else if(num1==num2 && num1>num3){
		printf("The greatest number are num1 and num2");
	}
	else if(num1==num3 && num1>num2){
		printf("The greatest number are num1 and num3");
	}
	else{
		printf("The greatest numbers are num2 and num3");
	}
	return 0;
}
