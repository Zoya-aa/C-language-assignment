#include <stdio.h>
#include <string.h>

int main(){
    char names[10][50],temp[50];
    int i,j;

    for(i=0; i<10; i++){
        printf("Enter name of student %d: ", i+1);
        scanf(" %[^\n]", names[i]);
    }

    for(i=0; i<9; i++){
        for(j=0; j<9-i; j++){
            if(strcmp(names[j],names[j+1])>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("\n");
    printf("Names in alphabetical order: \n");

    for(i=0; i<10; i++){
        printf("%s\n", names[i]);
    }

    return 0;
}
