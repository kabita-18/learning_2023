#include <stdio.h>
#include <math.h>

int main() {
    double x = 0.7;
    int exponent;
    double mantissa = frexp(x, &exponent);

    printf("Exponent in hexadecimal: 0x%X\n", exponent);
    printf("Exponent in binary: 0b");

    // Print the binary representation of the exponent
    for (int i = sizeof(exponent) * 8 - 1; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");

    return 0;
}
