#include <stdio.h>
int main (){
    int num,originalNum,remainder;
    int reversedNum = 0;

    printf("Enter a book code (number): ");
    scanf("%d", &num);

    originalNum = num;

    while (num!=0){
        remainder = num%10;
        reversedNum = reversedNum*10 + remainder;
        num = num/10;
    }
    if(originalNum==reversedNum){
        printf("%d is a palindrome", originalNum);
    }
	else{
        printf("%d is not a palindrome", originalNum);
    }

    return 0;
}	

