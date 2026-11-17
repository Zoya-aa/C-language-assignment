#include <stdio.h>
#include <string.h>

int main(){
    char feedback[500],updated[600];
    char *pos;
    int length;

    printf("Enter customer feedback: ");
    fgets(feedback,500,stdin);

    feedback[strcspn(feedback,"\n")]='\0';

    length=strlen(feedback);

    printf("Total characters: %d", length);
    
    if(strstr(feedback,"good")!=NULL && strstr(feedback,"bad")!=NULL){
    	printf("\n");
        printf("Sentiment: Mixed");
    }
    else if(strstr(feedback,"good")!=NULL){
    	printf("\n");
        printf("Sentiment: Positive");
    }
    else if(strstr(feedback,"bad")!=NULL){
    	printf("\n");
        printf("Sentiment: Negative");
    }
    else{
    	printf("\n");
        printf("Sentiment: Neutral");
    }

    pos=strstr(feedback,"bad");

    if(pos!=NULL){
        strcpy(updated,"");
        strncat(updated,feedback,pos-feedback);
        strcat(updated,"not good");
        strcat(updated,pos+3);
        
        printf("\n");
        printf("Updated review: %s", updated);
    }
    else{
    	printf("\n");
        printf("Updated review: %s", feedback);
    }

    return 0;
}
