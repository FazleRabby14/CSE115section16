#include <stdio.h>

typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

int main() {
    complex n1, n2, result;

    printf("Enter the value of first number real and imaginary: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("Enter the value of second number real and imaginary: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);

    if(result.imag>=0)
     printf("Sum = %.1f + %.1f i", result.real, result.imag);
    else
     printf("Sum = %.1f - %.1f i", result.real, result.imag);
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
