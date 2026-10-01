#include <stdio.h>
int main(){
    int n;
    int catalan = 1;

    printf("Enter a number(n): ");
    scanf("%d", &n);

    for (int i=0 ; i<n ; i++){
        catalan = catalan*2*(2*i + 1)/(i+2);
    }

    printf("The %dth Catalan number is: %lld\n", n, catalan);

    return 0;
}
