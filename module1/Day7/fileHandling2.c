// Case Handler:
// Write a C program to copy a file by considering the user option to handle the text case
// -u, to change file content to Upper Case
// -l, to change file content to Lower Case
// -s, to change file content to Sentence Case
// if no options are passed then it should be a normal copy

// Example, say we have a file f1 with the following content
// f1:
// -----------------------
// This is the file data
// testing Case copy
// application
// -----------------------

// ./cp -s f1 f2
// f2:
// -----------------------
// This Is The Tile Data
// Testing Case Copy
// Application
// -----------------------

// ./cp -l f1 f3
// f3:
// -----------------------
// this is the tile data
// testing case copy
// application
// -----------------------

// ./cp -u f1 f4
// f4:
// -----------------------
// THIS IS THE FILE DATA
// TESTING CASE COPY
// APPLICATION
// -----------------------

// ./cp f1 f5
// Should perform a normal copy

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertToUpperCase(char* str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void convertToLowerCase(char* str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void convertToSentenceCase(char* str) {
    int capitalize = 1;

    while (*str) {
        if (capitalize && isalpha((unsigned char)*str))
            *str = toupper((unsigned char)*str);
        else
            *str = tolower((unsigned char)*str);

        if (*str == '.' || *str == '?' || *str == '!')
            capitalize = 1;
        else if (isalpha((unsigned char)*str))
            capitalize = 0;

        str++;
    }
}

void copyFileWithCaseHandling(FILE* srcFile, FILE* destFile, int caseOption) {
    char ch;

    while ((ch = fgetc(srcFile)) != EOF) {
        if (caseOption == 'u')
            ch = toupper((unsigned char)ch);
        else if (caseOption == 'l')
            ch = tolower((unsigned char)ch);
        else if (caseOption == 's')
            convertToSentenceCase(&ch);

        fputc(ch, destFile);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 4) {
        printf("Insufficient arguments! Usage: ./cp [-u/-l/-s] source_file destination_file\n");
        return 1;
    }

    char* srcFileName = argv[2];
    char* destFileName = argv[3];

    FILE* srcFile = fopen("source.txt", "r");
    if (srcFile == NULL) {
        printf("Error opening source file '%s'\n", srcFileName);
        return 1;
    }

    FILE* destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error creating destination file '%s'\n", destFileName);
        fclose(srcFile);
        return 1;
    }

    int caseOption = 0;
    if (argv[1][0] == '-') {
        caseOption = argv[1][1];
        if (caseOption != 'u' && caseOption != 'l' && caseOption != 's') {
            printf("Invalid case option! Usage: ./cp [-u/-l/-s] source_file destination_file\n");
            fclose(srcFile);
            fclose(destFile);
            return 1;
        }
    }

    copyFileWithCaseHandling(srcFile, destFile, caseOption);

    fclose(srcFile);
    fclose(destFile);

    printf("File copied successfully!\n");

    return 0;
}

