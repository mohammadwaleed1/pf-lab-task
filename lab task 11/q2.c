#include <stdio.h>

int main() {
    FILE *file;
    char line[256];
    int lineNumber = 1;

    file = fopen("file.txt", "r");

    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        printf("%d: %s", lineNumber, line);
        lineNumber++;
    }

    fclose(file);

    return 0;
}
