#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

void readSpecificLine(const char *filename, int lineNumber) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return;
    }

    char line[MAX_LINE_LENGTH];
    int currentLine = 1;

    while (fgets(line, sizeof(line), file)) {
        if (currentLine == lineNumber) {
            printf("Line %d: %s", lineNumber, line);
            break;
        }
        currentLine++;
    }

    if (currentLine < lineNumber) {
        printf("Line %d does not exist in the file.\n", lineNumber);
    }

    fclose(file);
}

int main() {
    const char *filename = "user.txt";
    int lineNumber = 9;

    readSpecificLine(filename, lineNumber);

    return 0;
}
