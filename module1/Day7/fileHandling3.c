// Data Viewer:
// Write an application to view the log stored in data.csv
// Example, say you have the following data in data.csv

// ------------------------------------

// EntryNo,sensorNo,Temperature,Humidity,Light,

// 1,S1,36.5,100,50,10:30:50
// 2,S3,30,100,50,10:30:55
// 3,S2,-6.6,100,10,10:31:00
// ------------------------------------

// a. Write a function to extract each line in the .csv file and store it in an array of structures. 

// b. Also implement functions to display the contents of the array of structures.

 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
};

int readLogFile(const char* filename, struct LogEntry logEntries[]) {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening file '%s'\n", filename);
        return 0;
    }

    char line[100];
    int entryCount = 0;

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%s",
               &logEntries[entryCount].entryNo,
               logEntries[entryCount].sensorNo,
               &logEntries[entryCount].temperature,
               &logEntries[entryCount].humidity,
               &logEntries[entryCount].light,
               logEntries[entryCount].timestamp);

        entryCount++;

        if (entryCount >= MAX_ENTRIES) {
            printf("Maximum number of log entries reached!\n");
            break;
        }
    }

    fclose(file);
    return entryCount;
}

void displayLogEntries(const struct LogEntry logEntries[], int entryCount) {
    for (int i = 0; i < entryCount; i++) {
        printf("Entry %d:\n", logEntries[i].entryNo);
        printf("Sensor No: %s\n", logEntries[i].sensorNo);
        printf("Temperature: %.2f\n", logEntries[i].temperature);
        printf("Humidity: %d\n", logEntries[i].humidity);
        printf("Light: %d\n", logEntries[i].light);
        printf("Timestamp: %s\n", logEntries[i].timestamp);
        printf("\n");
    }
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int entryCount = readLogFile("data.csv", logEntries);

    if (entryCount > 0) {
        displayLogEntries(logEntries, entryCount);
    } else {
        printf("No log entries found!\n");
    }

    return 0;
}

