#include <stdio.h>

int main() {
    float accuracy, confidence, modelScore;
    int datasetSize;
    int userRole, modelStatus;
    int permission;

    printf("AI DECISION ENGINE \n");

    printf("Enter model accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Select User Role:\n");
    printf("1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");
    printf("Enter choice: ");
    scanf("%d", &userRole);

    printf("Select Model Status:\n");
    printf("1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");
    printf("Enter choice: ");
    scanf("%d", &modelStatus);

    printf("\nEnter permission value:\n");
    printf("View = 1, Train = 2, Test = 4, Deploy = 8\n");
    printf("Enter permission: ");
    scanf("%d", &permission);

    modelScore = (accuracy + confidence) / 2;

    printf("\n===== MODEL INFORMATION =====\n");
    printf("Accuracy: %.2f%%\n", accuracy);
    printf("Confidence: %.2f%%\n", confidence);
    printf("Dataset Size: %d\n", datasetSize);
    printf("Model Score: %.2f\n", modelScore);
    printf("User Role: ");

    switch (userRole) {
        case 1:
            printf("Admin\n");
            break;

        case 2:
            printf("Developer\n");
            break;

        case 3:
            printf("Researcher\n");
            break;

        default:
            printf("Invalid Role\n");
    }

    printf("Model Status: ");

    switch (modelStatus) {
        case 1:
            printf("Ready\n");
            break;

        case 2:
            printf("Testing\n");
            break;

        case 3:
            printf("Training\n");
            break;

        default:
            printf("Invalid Status\n");
    }

    if (permission & 8) {
        printf("Deployment Permission: Granted\n");
    }
    else {
        printf("Deployment Permission: Not Granted\n");
    }

    printf("Model Status Check: ");
    printf("%s\n", modelStatus == 1 ? "Ready" : "Not Ready");

    printf("Size of permission variable: %zu bytes\n", sizeof(permission));

    if (accuracy >= 80 && confidence >= 75 && datasetSize >= 1000 && modelStatus == 1 && (permission & 8)) {
         printf("\nDeployment Decision: DEPLOYMENT READY\n");
    }
    else {
        printf("\nDeployment Decision: NOT READY FOR DEPLOYMENT\n");

        if (accuracy < 80) {
            printf("- Accuracy must be at least 80%%.\n");
        }

        if (confidence < 75) {
            printf("- Confidence must be at least 75%%.\n");
        }

        if (datasetSize < 1000) {
            printf("- Dataset size must be at least 1000.\n");
        }

        if (modelStatus != 1) {
            printf("- Model status must be Ready.\n");
        }

        if (!(permission & 8)) {
            printf("- User does not have Deployment Permission.\n");
        }
    }

    return 0;
}
