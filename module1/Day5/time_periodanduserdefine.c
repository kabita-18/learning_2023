// 3. Write a program using structures to calculate the difference between two time periods using a user-defined function.
#include <stdio.h>
struct Time {
    int hr;
    int min;
    int sec;
};
void getTimeDifference(struct Time t1, struct Time t2, struct Time *diff) {
    int sec1, sec2, timeDiff;
    sec1 = t1.hr * 3600 + t1.min * 60 + t1.sec;
    sec2 = t2.hr * 3600 + t2.min * 60 + t2.sec;
    timeDiff = sec2 - sec1;
    diff->hr = timeDiff / 3600;
    timeDiff = timeDiff % 3600;
    diff->min = timeDiff / 60;
    diff->sec = timeDiff % 60;
}
int main() {
    struct Time startTime, endTime, difference;
    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &startTime.hr);
    printf("Minutes: ");
    scanf("%d", &startTime.min);
    printf("Seconds: ");
    scanf("%d", &startTime.sec);
    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &endTime.hr);
    printf("Minutes: ");
    scanf("%d", &endTime.min);
    printf("Seconds: ");
    scanf("%d", &endTime.sec);
    getTimeDifference(startTime, endTime, &difference);
    printf("\nTime Difference: %02d:%02d:%02d\n", difference.hr, difference.min, difference.sec);
    return 0;
}
