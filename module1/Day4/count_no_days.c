// Count no. of days
// i/p = 10/04/2015
// o/p = 31+28+31+10 = 100
// i/p = 10/04/2016 
// o/p = 31+29+31+10 = 101

#include <stdio.h>
#include <stdlib.h> // Required for atoi function

int countNoDays(char str[]) {
    int total_days = 0;
    int day = 0, month = 0, year = 0;
    int i = 0;

    // Extract day
    while (str[i] != '/') {
        day = day * 10 + (str[i] - '0');
        i++;
    }
    i++; // Move past the '/'

    // Extract month
    while (str[i] != '/') {
        month = month * 10 + (str[i] - '0');
        i++;
    }
    i++; // Move past the '/'

    // Extract year
    while (str[i] != '\0') {
        year = year * 10 + (str[i] - '0');
        i++;
    }

    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Handling leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        months[1] = 29; // Leap year, so February has 29 days
    }

    // Calculate the total number of days
    for (int i = 0; i < month - 1; i++) {
        total_days += months[i];
    }
    total_days += day;

    return total_days;
}

int main() {
    char str[50];
    printf("Enter the date (DD/MM/YYYY): ");
    scanf("%s", str);

    int result = countNoDays(str);
    printf("Total number of days: %d\n", result);

    return 0;
}
