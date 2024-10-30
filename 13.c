#include <stdio.h>
#include <stdlib.h>

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

    // Allocate memory for each string
    for (int i = 0; i < a; i++) {
        arr1[i] = (char *)malloc(100 * sizeof(char)); // Allocate memory for each string
        if (arr1[i] == NULL) {
            printf("Memory allocation failed\n");
            // Free previously allocated memory before exiting
            for (int j = 0; j < i; j++) {
                free(arr1[j]);
            }
            free(arr1);
            return 1;
        }

        printf("Enter element names %d: ", i + 1);
        scanf("%s", arr1[i]);
    }

    printf("\nElements and values:\n");
    for (int i = 0; i < a; i++) {
        printf("arr1[%d] = %s\n", i, arr1[i]);
    }

    // Free allocated memory
    for (int i = 0; i < a; i++) {
        free(arr1[i]);
    }
    free(arr1);

    return 0;
}