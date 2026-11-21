#include <stdio.h>

struct Address{
    char City[30];
    int ZipCode;
    char State[30];
};

struct Student{
    int RollNo;
    char Name[30];
    float CGPA;
    struct Address studentAddress;
};

int main(){
    struct Student student1 = {101,"Sara",3.8, {"Karachi", 75500, "Sindh"}};

    printf("Student Profile \n");

    printf("Roll Number: %d\n", student1.RollNo);
    printf("Name: %s\n", student1.Name);
    printf("CGPA: %.2f\n", student1.CGPA);

    printf("City: %s\n", student1.studentAddress.City);
    printf("Zip Code: %d\n", student1.studentAddress.ZipCode);
    printf("State: %s\n", student1.studentAddress.State);

    return 0;
}

