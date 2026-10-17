#include <stdio.h>
int main (){
    float sensor_data[3][4];
    int r,c;
    int target;

    printf("Enter temperature values for 3 days and 4 sensors: ");
    for (r = 0; r<3; r++) 
        for (c = 0; c<4; c++){
            scanf("%f", &sensor_data[r][c]);
        }
    
    printf("Enter the column index of the faulty sensor (0 to 3): ");
    scanf("%d", &target);

    for (r = 0; r<3; r++){
        for (c = target; c<3; c++){
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    printf("Updated 3x3 sensor data: \n");
    for (r = 0; r<3; r++){
        for (c = 0; c<3; c++){
            printf("%.2f ", sensor_data[r][c]);
        }
        printf("\n");
    }

    return 0;
}
