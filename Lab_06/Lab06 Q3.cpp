#include <stdio.h>
int main(){
    int status;
    int present = 0;
    int absent;

    for (int i=1 ; i<=15; i++){
        printf("Enter 1 if student is present or 0 if absent: ");
        scanf("%d", &status);

        if (status==1){
            present++;
        }
    }

    absent = 15-present;

    printf("Present students=%d\n", present);
    printf("Absent students=%d\n", absent);

    return 0;
}

