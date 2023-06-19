// Write a program to find both smallest and largest digits in given n numbers
// For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5

#include <stdio.h>
int getSmallestDigit(int num) {
    int smallestDigit = 9;  // Initialize with maximum possible value

    while (num > 0) {
        int digit = num % 10;
        if (digit < smallestDigit)
            smallestDigit = digit;
        num /= 10;
    }

    return smallestDigit;
}

int getLargestDigit(int num) {
    int largestDigit = 0;   // Initialize with minimum possible value

    while (num > 0) {
        int digit = num % 10;
        if (digit > largestDigit)
            largestDigit = digit;
        num /= 10;
    }

    return largestDigit;
}

void findSmallestLargestDigits(int n, int *numbers) {
    int smallestDigit = 9;  // Initialize with maximum possible value
    int largestDigit = 0;   // Initialize with minimum possible value

    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        int smallest = getSmallestDigit(num);
        int largest = getLargestDigit(num);

        if (smallest < smallestDigit)
            smallestDigit = smallest;

        if (largest > largestDigit)
            largestDigit = largest;
    }

    

    if (n < 1) {
        printf("Not Valid\n");
    } 
    
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    
}


int main() {
    // int numbers[] = {8, 156, 123450};
     int numbers[10];
     int n = sizeof(numbers) / sizeof(numbers[0]);
     for(int i =0; i<n; i++){
        scanf("%d", &numbers[i]);
    }
    
    findSmallestLargestDigits(n, numbers);

    return 0;
}

