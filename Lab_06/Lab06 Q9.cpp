#include <stdio.h>
int main(){
    char word[100];
    char reversed[100];
    int length = 0;
    int is_palindrome = 1;
    int vowels = 0;
    int consonants = 0;
    int i;

    printf("Enter a word: ");
    scanf("%s", word);
    printf("Original word: %s \n", word);

    while (word[length] != '\0'){
        length++;
    }
    printf("Length of word: %d \n", length);

    for (i=0 ; i<length ; i++){
        reversed[i] = word[length-1-i];
    }
    reversed[length] = '\0';
    printf("Reversed word: %s \n", reversed);

    for (i=0 ; i<length ; i++){
        if(word[i]!=reversed[i]){
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome){
        printf("The word is a palindrome \n");
    } 
	else{
        printf("The word is not a palindrome \n");
    }

    for (i=0 ; i<length ; i++){
        char ch = word[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                vowels++;
            } 
			else{
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d \n", vowels);
    printf("Number of consonants: %d \n", consonants);

    return 0;
}
