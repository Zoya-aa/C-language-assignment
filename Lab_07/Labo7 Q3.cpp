#include <stdio.h>
int main (){
    char secret_messages[3][100];
    int i,j;
    int spaces,words;

    for (i = 0; i<3; i++){
        printf("Enter secret message %d: ", i + 1);
        scanf(" %[A-Z ]", secret_messages[i]);
    }

    printf("Filtered Messages: \n");
    for (i=0; i<3; i++){
        spaces = 0;
        for (j=0; secret_messages[i][j] !='\0'; j++){
            if (secret_messages[i][j] == ' '){
                spaces++;
            }
        }
        
        words = spaces + 1;

        printf("Message: %s | Words: %d\n", secret_messages[i], words);
    }

    return 0;
}
