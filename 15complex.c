%%writefile complex_operations.c
#include <stdio.h>

// Define a structure for a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number from the user
Complex readComplex() {
    Complex num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}

// Function to add two complex numbers
Complex addComplex(Complex n1, Complex n2) {
    Complex sum;
    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;
    return sum;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex n1, Complex n2) {
    Complex diff;
    diff.real = n1.real - n2.real;
    diff.imag = n1.imag - n2.imag;
    return diff;
}

void displayComplex(Complex n) {
    if (n.imag >= 0) {
        printf("%.2f + %.2fi", n.real, n.imag);
    } else {
        printf("%.2f - %.2fi", n.real, -n.imag);
    }
}

int main() {
    Complex c1, c2, s, d;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("\nEnter second complex number:\n");
    c2 = readComplex();

    s = addComplex(c1, c2);
    d = subtractComplex(c1, c2);

    printf("\nFirst complex number: ");
    displayComplex(c1);
    printf("\nSecond complex number: ");
    displayComplex(c2);

    printf("\n\nSum: ");
    displayComplex(s);

    printf("\nDifference: ");
    displayComplex(d);
    printf("\n");

    return 0;
}