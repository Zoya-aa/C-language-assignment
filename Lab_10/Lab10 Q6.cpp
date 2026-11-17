#include <stdio.h>
#include <string.h>

int main(){
    char user[50];
    char pass[50];
    char fuser[50];
    char fpass[50];

    printf("Enter Username: ");
    scanf("%s", user);

    printf("Enter Password: ");
    scanf("%s", pass);

    FILE *fptr = fopen("credentials.txt", "r");

    if(fptr==NULL){
        printf("Error: File Not Found! \n");
        return 1;
    }

    fscanf(fptr, "%s %s", fuser,fpass);

    if(strcmp(pass,fpass)==0){
        printf("Access Granted!\n");
    } 
	else{
        printf("Access Denied! \n");
    }

    fclose(fptr);

    return 0;
}

