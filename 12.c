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