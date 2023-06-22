// write a program to Store Data for n students in Structures Dynamically. 

#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    int n, i;
    struct Student *students;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    students = (struct Student*)malloc(n * sizeof(struct Student));
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name:\n ");
        scanf("%s", students[i].name);
        printf("Age:\n ");
        scanf("%d", &students[i].age);
        printf("Marks:\n ");
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\n Student %d:\n", i + 1);
        printf("\n Name: %s\n", students[i].name);
        printf("\n Age: %d\n", students[i].age);
        printf("\n Marks: %.2f\n", students[i].marks);
    }
    free(students);
    return 0;
}
