// Write a C program that uses functions to perform the following operations: 
//      i) Reading a complex number 
//      ii) Writing a complex number 
//      iii) Addition of two complex numbers 
//      iv) Multiplication of two complex numbers 
//   (Note: represent complex number using a structure.

#include<stdio.h>

struct Complex{
    float real;
    float imag;
} c1, c2, add, multiply;

// struct Complex readComplex(){
//     printf("Enter the real number:");
//     scanf("%f", &c1.real);

//     printf("Enter the imaginary number:");
//     scanf("%f", &c1.imag);

//     return c1;

// }
struct Complex SumOfComplexNumber(struct Complex num1, struct Complex num2){
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    return sum;
}
struct Complex productOfComplexNumber(struct Complex num1, struct Complex num2){
    struct Complex product;
    product.real = num1.real * num2.real;
    product.imag = num1.imag * num2.imag;

    return product;
}
struct Complex writeComplex(struct Complex num){
    printf("Complex number is: %.2f + %.2fi\n", num.real, num.imag);
}

int main(){
    
    
    printf("Enter the real number:");
    scanf("%f", &c1.real);

    printf("Enter the imaginary number:");
    scanf("%f", &c1.imag);

    printf("Enter the real number:");
    scanf("%f", &c2.real);

    printf("Enter the imaginary number:");
    scanf("%f", &c2.imag);


    
    // printf("Complex number is: %.2f + %.2fi\n", c1.real, c1.imag);
    add = SumOfComplexNumber(c1, c2);
    multiply = productOfComplexNumber(c1, c2);
    writeComplex(add);
    writeComplex(multiply);

    return 0;
}
