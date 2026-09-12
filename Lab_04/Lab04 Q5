#include <stdio.h>
int main(){
	int role;
	int status;
	int security;
	
	printf("Enter user role(1=Admin,2=Researcher,3=Student):");
	scanf("%d",&role);
	printf("Enter account status(1=Active,0=Inactive):");
	scanf("%d",&status);
	printf("Enter security level:");
	scanf("%d",&security);
	
	if(status==0){
		printf("Access Denied");
	}
	else if(role==1 && security>=3){
		printf("Admin access granted");
	}
	else if(role==2 && security>=2){
		printf("Researcher access granted");
	}
	else if(role==3 && security>=1){
		printf("Student access granted");
	}
	else{
		printf("Access Denied");
	}
	return 0;
}
