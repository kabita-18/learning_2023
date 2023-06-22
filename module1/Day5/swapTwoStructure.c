/* 5. Write a program to demonstrate the swapping the fields of two structures using pointers    */
#include <stdio.h>
struct Point {
    int x;
    int y;
};
void swapPoints(struct Point* p1, struct Point* p2) {
    struct Point temp;
    temp.x = p1->x;
    p1->x = p2->x;
    p2->x = temp.x;
    temp.y = p1->y;
    p1->y = p2->y;
    p2->y = temp.y;
}
int main() {
    struct Point p1, p2;
    p1.x = 2;
    p1.y = 4;
    p2.x = 6;
    p2.y = 8;
    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);
    swapPoints(&p1, &p2);
    printf("After swapping:\n");
    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);
    return 0;
}