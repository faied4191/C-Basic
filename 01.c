#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char name[MAX_LENGTH];
    char id[MAX_LENGTH];

    printf("Enter Your Name: ");
    fgets(name, MAX_LENGTH, stdin);