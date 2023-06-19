// 

#include <stdio.h>

void printBits(int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit

    for (i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0; // Check if the bit is set or not
        printf("%d", bit);
        mask >>= 1; // Shift the mask to the right
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}
