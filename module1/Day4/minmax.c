// find the min and max of array

// 64, 84, 20, 36, 12, 90, 72, 10, 45, 56
// min = 10,   max = 90

#include <stdio.h>

int getminimumnumber(int arr[], int size) {
    int min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    return min;
}

int getmaximumnumber(int arr[], int size) {
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int n;
    int arr[10];
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minimum = getminimumnumber(arr, n);
    int maximum = getmaximumnumber(arr, n);

    printf("Minimum number: %d\n", minimum);
    printf("Maximum number: %d\n", maximum);

    return 0;
}
