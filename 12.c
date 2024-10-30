#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a;

    printf("Enter the number of elements: ");
    scanf("%d", &a);

    // Allocate memory for array of char pointers
    char **arr1 = (char **)malloc(a * sizeof(char *));
    if (arr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Allocate memory for each string and read input
    for (int i = 0; i < a; i++) {
        arr1[i] = (char *)malloc(100 * sizeof(char)); // Allocate memory for each string
        if (arr1[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        printf("Enter element names %d: ", i + 1);
        scanf("%s", arr1[i]);
    }