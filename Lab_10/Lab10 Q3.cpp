#include <stdio.h>
#include <string.h>

int main(){
    char email[100],domain[100];
    char *pos;

    printf("Enter email address: ");
    scanf("%s", email);

    pos=strchr(email,'@');

    if(pos==NULL){
        printf("Invalid Email Format");
    }
    else{
        strcpy(domain,pos+1);

        printf("Domain name: %s", domain);
    }

    return 0;
}
