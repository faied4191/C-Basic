#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char name[MAX_LENGTH];
    char id[MAX_LENGTH];

    printf("Enter Your Name: ");
    fgets(name, MAX_LENGTH, stdin);

    // Remove newline character if present
    size_t length = strlen(name);
    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0';
    }

    printf("Enter Your ID: ");
    fgets(id, MAX_LENGTH, stdin);

    // Remove newline character if present
    length = strlen(id);
    if (length > 0 && id[length - 1] == '\n') {
        id[length - 1] = '\0';
    }

    printf("Name: %s\n", name);
    printf("ID: %s\n", id);
    printf("Length of Name= %zu\n", strlen(name));
    
    return 0;
}