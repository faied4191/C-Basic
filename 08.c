#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char a[MAX_LENGTH];
    int count = 0;

    printf("Enter Your Name: ");
    fgets(a, MAX_LENGTH, stdin);