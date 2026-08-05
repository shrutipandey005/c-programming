#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "Hello, this is file handling in C.\n");

    fclose(fp);

    printf("Data written to file successfully\n");

    return 0;
}
