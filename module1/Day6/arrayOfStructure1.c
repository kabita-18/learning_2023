// 1. Assume User will be providing input in the form of a string as show below. 
// Write a function to parse the string and initialize an array of structures. 

// Example String : "1001 Aron 100.00" 
// Example Structure : 
//     struct Student{
//         int rollno;
//         char name[20];
//         float marks;
//     };

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char* input, struct Student** students, int size) {
    *students = (struct Student*)malloc(size * sizeof(struct Student));

    int i = 0;
    int j = 0;
    int k = 0;

    while (input[j] != '\0') {
        char buffer[20];
        int bufferIndex = 0;

        // Parse rollno
        while (input[j] != ' ') {
            buffer[bufferIndex++] = input[j++];
        }
        buffer[bufferIndex] = '\0';
        (*students)[i].rollno = atoi(buffer);

        // Skip space
        j++;

        // Parse name
        bufferIndex = 0;
        while (input[j] != ' ') {
            (*students)[i].name[bufferIndex++] = input[j++];
        }
        (*students)[i].name[bufferIndex] = '\0';

        // Skip space
        j++;

        // Parse marks
        bufferIndex = 0;
        while (input[j] != '\0') {
            buffer[bufferIndex++] = input[j++];
        }
        buffer[bufferIndex] = '\0';
        (*students)[i].marks = atof(buffer);

        i++;
    }
}

int main() {
    const char* input = "1001 Aron 100.00";
    int size = 1;

    struct Student* students;
    parseInputString(input, &students, size);

    printf("Roll No: %d\n", students[0].rollno);
    printf("Name: %s\n", students[0].name);
    printf("Marks: %.2f\n", students[0].marks);

    free(students);
    return 0;
}
