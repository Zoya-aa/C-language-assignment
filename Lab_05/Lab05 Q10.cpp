#include <stdio.h>
#include <math.h>

int main(){
    float accuracy,confidence,model_score;
    int datasetSize,userRole,model_status,permission;
    int ready;

    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter confidence score: ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1=Admin, 2=Developer, 3=Researcher): ");
    scanf("%d", &userRole);

    printf("Enter model status (1=Ready, 2=Testing, 3=Training): ");
    scanf("%d", &model_status);

    printf("Enter permissions (1=View, 2=Train, 4=Test, 8=Deploy): ");
    scanf("%d", &permission);

    model_score = (accuracy+confidence)/2;

    ready = (accuracy >= 80 && confidence >= 75 && datasetSize >= 1000 && model_status == 1 && (permission & 8) == 8);
    printf("Model Score: %.2f\n", model_score);
    printf("Rounded Score: %.0f\n", round(model_score));

    switch (userRole){
        case 1:
            printf("User Role: Admin\n");

            switch (model_status){
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Invalid Model Status\n");
            }
            break;

        case 2:
            printf("User Role: Developer\n");

            switch (model_status) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Invalid Model Status\n");
            }
            break;

        case 3:
            printf("User Role: Researcher\n");

            switch (model_status) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Invalid Model Status\n");
            }
            break;

        default:
            printf("Invalid User Role\n");
    }

    if (ready) {
        printf("Deployment Ready: ");
        printf("%s\n", ((permission & 8) == 8) ? "Yes" : "No");

        if (userRole == 1 || userRole == 2){
            printf("Deployment Permission: Allowed\n");
        }
		else{
            printf("Deployment Permission: Check Required\n");
        }
    } else{
        printf("Deployment Ready: No\n");

        if (accuracy < 80){
            printf("Accuracy requirement not met \n");
        } else if (confidence < 75){
            printf("Confidence requirement not met \n");
        } else if (datasetSize < 1000){
            printf("Dataset size requirement not met \n");
        } else if (model_status != 1){
            printf("Model is not Ready \n");
        } else if ((permission & 8) != 8){
            printf("Deployment permission not available \n");
        }
    }

    printf("Size of accuracy variable: %zu bytes\n", sizeof(accuracy));
    printf("Size of dataset variable: %zu bytes\n", sizeof(datasetSize));

    return 0;
}
