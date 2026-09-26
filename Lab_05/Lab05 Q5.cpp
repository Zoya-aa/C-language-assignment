#include <stdio.h>
int main() {
    float confidence;
    int userType,recognized,access;
    
    printf("Enter face recognition confidence (0-100): ");
    scanf("%f", &confidence);

    printf("Enter user type: \n");
    printf("1.Authorized \n");
    printf("2.Unauthorized \n");
    printf("Enter your choice: ");
    scanf("%d", &userType);

    
    if (confidence >= 80){
        recognized = 1;
    }
    else if (confidence >= 50){
        recognized = 0;
        printf("Manual verification required.\n");
    }
    else {
        recognized = 0;
    }

    if (confidence >= 80 && userType == 1){
        access = 1;
    }
    else{
        access = 0;
    }

    printf("Access Status: %s\n",access == 1 ? "Access Granted" : "Access Denied");

    return 0;
}
