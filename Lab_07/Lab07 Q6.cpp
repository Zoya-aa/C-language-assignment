#include <stdio.h>
int main (){
    int shifts[4][3];
    int i,j;
    int target;
    int new_row[3];

    printf("Enter initial 3x3 production data: ");
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            scanf("%d", &shifts[i][j]);
        }
    }
    printf("Enter target row index for insertion: ");
    scanf("%d", &target);

    printf("Enter 3 new production values: ");
    for (j = 0; j<3; j++){
        scanf("%d", &new_row[j]);
    }

    for (i = 3; i>target; i--){
        for (j = 0; j < 3; j++){
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    for (j = 0; j<3; j++){
        shifts[target][j] = new_row[j];
    }

    printf("Resulting 4x3 matrix: \n");
    for (i = 0; i<4; i++){
        for (j = 0; j<3; j++){
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}
