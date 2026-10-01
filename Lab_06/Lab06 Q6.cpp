#include <stdio.h>
int main(){
    int num,digit;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter electricity meter reading: ");
    scanf("%d", &num);

    if(num==0){
        evenCount = 1;
    } 
	else{
        if(num<0){
            num = -num;
        }

        while (num>0){
            digit = num%10;

            if(digit%2 == 0){
                evenCount++;
            } 
			else{
                oddCount++;
            }

             num = num/10;
        }
    }

    printf("Even digits: %d \n", evenCount);
    printf("Odd digits: %d \n", oddCount);

    return 0;
}
