#include <stdio.h>
int main(){
	int total,missing,duplicate;
	float missing_percent,duplicate_percent;
	
	printf("Enter total number of records:");
	scanf("%d",&total);
	printf("Enter number of missing records:");
	scanf("%d",&missing);
	printf("Enter number of duplicate records:");
	scanf("%d",&duplicate);
	missing_percent=((float)missing/total)*100;
	duplicate_percent=((float)duplicate/total)*100;
	
	if(total<=0){
		printf("Invalid Dataset");
	}
	else if(missing_percent>30){
		printf("Poor Quality Dataset");
	}
	else if(missing_percent<=30 && duplicate_percent>20){
		printf("Dataset Requires Cleaning");
	}
	else{
		printf("Dataset Ready for Training");
	}
	return 0;
}
