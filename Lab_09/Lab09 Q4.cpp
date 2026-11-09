#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int multiply(int a,int b){
    return a*b;
}

int findMax(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int compute(int a,int b,int (*ptr)(int,int)){
    return ptr(a,b);
}

int main(){
    int a,b,sum,product,maximum;

    printf("Enter two integers: ");
    scanf("%d%d", &a,&b);

    sum=compute(a,b,add);
    product=compute(a,b,multiply);
    maximum=compute(a,b,findMax);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Maximum: %d\n", maximum);

    return 0;
}
