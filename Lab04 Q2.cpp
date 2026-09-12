#include <stdio.h>
int main(){
	int score;
	printf("Enter confidence score between 0 and 100:");
	scanf("%d",&score);
	if(score<0 || score>100){
		printf("Invalid Score");
	}
	else if(score>=0 && score<=49){
		printf("Low Confidence");
	}
	else if(score>=50 && score<=79){
		printf("Moderate Confidence");
	}
	else{
		printf("High Confidence");
	}
	return 0;
}
