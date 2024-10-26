#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char a[MAX_LENGTH];
    int count = 0;

    printf("Enter Your Name: ");
    fgets(a, MAX_LENGTH, stdin);

    // Remove newline character if present
    size_t length = strlen(a);
    if (length > 0 && a[length - 1] == '\n') {
        a[length - 1] = '\0';
    }

    // Calculate the length of the string
    count = strlen(a);

    printf("Name: %s\n", a);
    printf("Length: %d\n", count);

    return 0;
}