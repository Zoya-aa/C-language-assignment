#include <stdio.h>
int main (){
    char logs[3][30];
    int i,j;
    int count = 0;

    for (i = 0; i < 3; i++){
        printf("Enter log entry %d: ", i + 1);
        scanf(" %[^\n]", logs[i]);
    }

    for (i = 0; i < 3; i++){
        for (j = 0; logs[i][j] !='\0'; j++){
            if (logs[i][j] >='A' && logs[i][j] <='Z'){
                count++;
            }
        }
    }

    printf("Total uppercase letters:%d \n", count);

    return 0;
}
