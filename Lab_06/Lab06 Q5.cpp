#include <stdio.h>
int main(){
	//long long holds much larger numbers as compared to int
    long long n,i;
    long long fact1 = 1, fact2 = 1, fact3 = 1;
    long long catalan;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=2*n; i++)
        fact1 = fact1*i;

    for(i=1; i<=n+1; i++)
        fact2 = fact2*i;

    for(i=1; i<=n; i++)
        fact3 = fact3*i;

    catalan = fact1/(fact2*fact3);

    printf("Catalan number: %d", catalan);

    return 0;
}
