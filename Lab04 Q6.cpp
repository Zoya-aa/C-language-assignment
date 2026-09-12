#include<stdio.h>
int main(){
	int obstacle;
	int person;
	int battery;
	
	printf("Enter 1 for obstacle or 0 for no obstacle:");
	scanf("%d",&obstacle);
		
	if(obstacle==1){
		printf("Enter 1 for person or 0 for no person:");
	    scanf("%d",&person);
		if(person==1)
		printf("Emergency stop");
		else
		printf("Change Direction");
	}
	else{
		printf("Enter battery percentage:");
	    scanf("%d",&battery);
		if(battery<20)
		printf("Return to changing station");
		else
		printf("Continue Moving");
	}
	return 0;
		
		
	}
	

