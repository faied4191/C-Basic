#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 4
#define STRING_LENGTH 20

int main() {
    char arr1[ARRAY_SIZE][STRING_LENGTH] = {
        "Volvo", "BMW", "Ford", "Mazda"
    };

    // Modify the first element
    strcpy(arr1[0], "Opel");

    // Print the first element
    printf("First Element Name: %s\n", arr1[0]);

    // Print the size of the first element (length of the string)
    printf("First Element Size: %lu\n", strlen(arr1[0]));

    // Print the array size
    printf("Array Size: %lu\n", sizeof(arr1) / sizeof(arr1[0]));

    return 0;
}