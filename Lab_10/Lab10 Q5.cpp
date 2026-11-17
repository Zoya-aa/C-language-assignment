#include <stdio.h>

int main(){
    int rollno;
    char name[50];
    float marks;

    FILE *fptr = fopen("marks.txt", "r");

    if(fptr==NULL){
        printf("Error: File Not Found! \n");
        return 1;
    }

    printf("%-10s %-20s %-10s\n", "RollNo", "Name", "Marks");

    while(fscanf(fptr, "%d %s %f", &rollno, name, &marks) != EOF){
        printf("%10d %20s %10.2f \n", rollno,name,marks);
    }

    fclose(fptr);

    return 0;
}
