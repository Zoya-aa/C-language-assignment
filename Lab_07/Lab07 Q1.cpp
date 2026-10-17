#include <stdio.h>
int main (){
    char student_names[3][50];
    int marks[3][3];
    int i,j;
    float sum,avg;

    for (i = 0; i < 3; i++){
        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);

        printf("Enter 3 marks for student %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("Student Report: ");
    for (i = 0; i < 3; i++){
        sum = 0;
        for (j = 0; j < 3; j++){
            sum += marks[i][j];
        }
        avg = sum/3.0;

        printf("Name: %s | Average Marks: %.2f\n", student_names[i], avg);
    }

    return 0;
}
