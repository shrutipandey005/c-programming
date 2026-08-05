#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    struct Student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter ID and Name for student %d: ", i + 1);
        scanf("%d %s", &s[i].id, s[i].name);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, Name: %s\n", s[i].id, s[i].name);
    }

    return 0;
}
