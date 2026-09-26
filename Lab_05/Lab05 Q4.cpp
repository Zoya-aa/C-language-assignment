#include <stdio.h>

int main() {
    int category,choice;

    printf("AI CHATBOT \n");
    printf("1.Greeting \n");
    printf("2.Study \n");
    printf("3.Weather \n");
    printf("4.Help \n");
    printf("Enter your category: ");
    scanf("%d", &category);

    if (category == 1) {
        printf("Greeting:\n");
        printf("1.Hello \n");
        printf("2.How are you \n");
        printf("3.Goodbye \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Chatbot: Hello! Nice to meet you.\n");
        }
        else if (choice == 2) {
            printf("Chatbot: I am fine. How can I help you?\n");
        }
        else if (choice == 3) {
            printf("Chatbot: Goodbye! Have a nice day.\n");
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    else if (category == 2) {
        printf("Study: \n");
        printf("1.Programming \n");
        printf("2.Mathematics \n");
        printf("3.AI \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Chatbot: Programming helps you create software.\n");
        }
        else if (choice == 2) {
            printf("Chatbot: Mathematics helps develop logical thinking.\n");
        }
        else if (choice == 3) {
            printf("Chatbot: AI allows computers to perform intelligent tasks.\n");
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    else if (category == 3) {
        printf("Weather: \n");
        printf("1.Today \n");
        printf("2.Tomorrow \n");
        printf("3.Forecast \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Chatbot: Today's weather is sunny.\n");
        }
        else if (choice == 2) {
            printf("Chatbot: Tomorrow's weather will be partly cloudy.\n");
        }
        else if (choice == 3) {
            printf("Chatbot: The forecast shows changing weather conditions.\n");
        }
        else {
            printf("Invalid choice! \n");
        }
    }

    else if (category == 4) {
        printf("Help: \n");
        printf("1.About Chatbot \n");
        printf("2.Commands \n");
        printf("3.Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Chatbot: I am a simple rule-based AI chatbot.\n");
        }
        else if (choice == 2) {
            printf("Chatbot: You can select Greeting,Study,Weather,or Help.\n");
        }
        else if (choice == 3) {
            printf("Chatbot: Exiting Goodbye!\n");
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    else {
        printf("Invalid category!\n");
    }

    return 0;
}
