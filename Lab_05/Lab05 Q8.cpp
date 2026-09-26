#include <stdio.h>
int main() {
    int permission;

    int view = 1;
    int train = 2;
    int test = 4;
    int deploy = 8;

    printf("Enter your permission value: ");
    scanf("%d", &permission);

    if (permission & view)
        printf("View: Allowed\n");
    else
        printf("View: Not Allowed\n");

    if (permission & train)
        printf("Training: Allowed\n");
    else
        printf("Training: Not Allowed\n");

    if (permission & test)
        printf("Testing: Allowed\n");
    else
        printf("Testing: Not Allowed\n");

    if (permission & deploy)
        printf("Deployment: Allowed\n");
    else
        printf("Deployment: Not Allowed\n");

    if ((permission & train) && (permission & deploy))
        printf("User has BOTH Training and Deployment permissions.\n");
    else
        printf("User does NOT have both Training and Deployment permissions.\n");

    return 0;
}
