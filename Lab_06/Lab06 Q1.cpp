#include <stdio.h>
int main(){
    int pin,digit,sum = 0;

    printf("Enter a 4-digit PIN: ");
    scanf("%d", &pin);

    for (int i = 1 ; i <= 4 ; i++){
        digit = pin % 10;
        sum = sum + digit;
        pin = pin / 10;
    }
    if (sum > 10)
        printf("Strong PIN");
    else
        printf("Weak PIN");

    return 0;
}
