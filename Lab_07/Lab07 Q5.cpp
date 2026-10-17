#include <stdio.h>
int main (){
    char sentences[3][100];
    int i,j;
    int count;

    for (i = 0; i<3; i++){
        printf("Enter sentence %d: ", i + 1);
        scanf("%[^;]", sentences[i]);
        scanf("%*c");
    }
    printf("Vowel Count Report: \n");
    for (i = 0; i<3; i++){
        count = 0;
        for (j = 0; sentences[i][j] !='\0'; j++){
            char ch = sentences[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                count++;
            }
        }
        printf("Sentence %d Vowels: %d\n", i + 1, count);
    }

    return 0;
}
