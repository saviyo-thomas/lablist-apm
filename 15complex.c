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
Enter first complex number:
Enter real part: 4
Enter imaginary part: 2

Enter second complex number:
Enter real part: 8
Enter imaginary part: 6

First complex number: 4.00 + 2.00i
Second complex number: 8.00 + 6.00i

Sum: 12.00 + 8.00i
Difference: -4.00 - 4.00i
*/
