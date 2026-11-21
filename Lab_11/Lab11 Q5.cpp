#include <stdio.h>

struct HospitalRecord{
    struct PatientInfo{
        int patientID;
        char name[30];
        int age;
    } patient;

    char roomNo[10];
    int days;
    float bill;
};

int main(){
    struct HospitalRecord h1 = {{101,"Sara",25}, "A12", 5, 15000};

    struct HospitalRecord *ptr;

    ptr = &h1;

    printf("Hospital Record \n");

    printf("Patient ID: %d\n", ptr->patient.patientID);
    printf("Name: %s\n", ptr->patient.name);
    printf("Age: %d\n", ptr->patient.age);

    printf("Room Number: %s\n", ptr->roomNo);
    printf("Days Admitted: %d\n", ptr->days);
    printf("Hospital Bill: %.2f\n", ptr->bill);

    return 0;
}

