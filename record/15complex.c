/*
Name: Saviyo Thomas
Roll No: CS11
Date: 18-07-2026

Experiment No: 15

Heading: Complex Number Operations using Structures

Aim: Develop a program that allows the user to input two complex numbers and calculates their sum and difference. This program could be applied in simulations for electrical engineering or physics problems.

********Algorithm***********
1. Define structure with real and imag parts.
2. Read two complex numbers with real and imaginary parts.
3. Compute sum by adding parts and difference by subtracting parts.
4. Display both numbers, sum and difference.
*/
/* ************SOURCE CODE************ */
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} C;


C getComp() {
    C num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imag);
    return num;
}

C addComp(C n1, C n2) {
    C sum;
    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;
    return sum;
}

C subComp(C n1, C n2) {
    C diff;
    diff.real = n1.real - n2.real;
    diff.imag = n1.imag - n2.imag;
    return diff;
}

void disComp(C n) {
    if (n.imag >= 0) {
        printf("%.2f + %.2fi", n.real, n.imag);
    } else {
        printf("%.2f - %.2fi", n.real, -n.imag);
    }
}

int main() {
    C c1, c2, s, d;

    printf("Enter first complex number:\n");
    c1 = getComp();

    printf("\nEnter second complex number:\n");
    c2 = getComp();

    s = addComp(c1, c2);
    d = subComp(c1, c2);

    printf("\nFirst complex number: ");
    disComp(c1);
    printf("\nSecond complex number: ");
    disComp(c2);

    printf("\n\nSum: ");
    disComp(s);

    printf("\nDifference: ");
    disComp(d);
    printf("\n");

    return 0;
}

/*
************OUTPUT************
CS2024PG01@csserver:~/lablist$ gcc 15complex.c -o 15complex
CS2024PG01@csserver:~/lablist$ ./15complex
Enter first complex number:
Enter real part: Enter imaginary part: 
Enter second complex number:
Enter real part: Enter imaginary part: 
First complex number: 4.00 + 2.00i
Second complex number: 8.00 + 6.00i

Sum: 12.00 + 8.00i
Difference: -4.00 - 4.00i
*/
