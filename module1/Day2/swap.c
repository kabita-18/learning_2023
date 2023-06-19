// Write a program to swap any type of data passed to an function.

// Topics to be covered
// - Pointers
// - Type Casting

#include <stdio.h>

// Function to swap two variables of any type
void swap(void *a, void *b, size_t size) {
    char *ptr1 = (char *)a;
    char *ptr2 = (char *)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = *(ptr1 + i);
        *(ptr1 + i) = *(ptr2 + i);
        *(ptr2 + i) = temp;
    }
}

int main() {
    int a = 10, b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap two integers
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double x = 3.14, y = 2.71;
    printf("Before swap: x = %lf, y = %lf\n", x, y);

    // Swap two doubles
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %lf, y = %lf\n", x, y);

    return 0;
}

