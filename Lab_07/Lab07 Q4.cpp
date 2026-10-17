#include <stdio.h>
int main(){
    char word_grid[3][100];
    int i,j;

    for (i = 0; i<3; i++){
        printf("Enter 3 words for row %d: ", i + 1);
        scanf(" %[^\n]", word_grid[i]);
    }
    int max_len = 0;
    int best_row = 0;
    int best_col = 0;

    for (i = 0; i<3; i++){
        int j = 0;
        int col = 0;
        while (word_grid[i][j] != '\0'){
            char temp[50];
            int k = 0;
            while (word_grid[i][j] != ' ' && word_grid[i][j] != '\0'){
                temp[k] = word_grid[i][j];
                k++;
                j++;
            }
            temp[k] = '\0';

            int len = 0;
            while (temp[len] != '\0'){
                len++;
            }
            if (len > max_len){
                max_len = len;
                best_row = i;
                best_col = col;
            }

            col++;
            if (word_grid[i][j] == ' '){
                j++;
            }
        }
    }

    printf("Longest word length: %d\n", max_len);
    printf("Row Index (i): %d\n", best_row);
    printf("Column Index (j): %d\n", best_col);

    return 0;
}
