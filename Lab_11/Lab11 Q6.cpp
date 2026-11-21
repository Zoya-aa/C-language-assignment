#include <stdio.h>

#define tollRate 50

void processVehicle(char vehicleType[]){
    static int totalVehicles=0;
    static int totalRevenue=0;

    totalVehicles++;
    totalRevenue = totalRevenue+tollRate;
    
    printf("\n");
    printf("Vehicle Type: %s\n", vehicleType);
    printf("Toll Fee: %d PKR\n", tollRate);
    printf("Total Vehicles: %d\n", totalVehicles);
    printf("Total Revenue: %d PKR\n", totalRevenue);
}

int main(){
    processVehicle("Car");
    processVehicle("Bike");
    processVehicle("Truck");
    processVehicle("Car");
    
    printf("\n");
    printf("Final Toll Revenue: 200 PKR\n");

    return 0;
}

