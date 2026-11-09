#include <stdio.h>

void printSensorData(void *data,char type){
    if(type=='f'){
        printf("Temperature: %.2f Celsius\n", *(float*)data);
    }
    else if(type=='i'){
        if(*(int*)data==1){
            printf("Motion Detected \n");
        }
        else{
            printf("No Motion \n");
        }
    }
    else if(type=='c'){
        if(*(char*)data=='O'){
            printf("Door Open\n");
        }
        else if(*(char*)data=='C'){
            printf("Door Closed \n");
        }
    }
}

int main(){
    float temperature;
    int motion;
    char door;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter motion status(1 or 0): ");
    scanf("%d", &motion);

    printf("Enter door status (O or C): ");
    scanf(" %c", &door);

    printSensorData(&temperature,'f');
    printSensorData(&motion,'i');
    printSensorData(&door,'c');

    return 0;
}
