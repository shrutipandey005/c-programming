#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "Appending new data to file.\n");

    fclose(fp);

    printf("Data appended successfully\n");

    return 0;
}
