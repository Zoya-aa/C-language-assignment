#include <stdio.h>
int main(){
	float accuracy;
	int latency;
	int approval;
	
	printf("Enter model accuracy:");
	scanf("%f",&accuracy);
	printf("Enter prediction latency:");
	scanf("%d",&latency);
	printf("Enter model approval status:");
	scanf("%d",&approval);
	
	if(accuracy>=90 && latency<=100 && approval==1){
		printf("Model deployed");
	}
	else{
		printf("Model cannot be deployed because: \n");
		if(accuracy<90){
			printf("Accuracy too low");
		}
		if(latency>100){
			printf("Latency too high");
		}
		if(approval==0){
			printf("Model not approved");
		}
	}
	return 0;
}
