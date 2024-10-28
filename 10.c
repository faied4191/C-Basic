#include <stdio.h>

float isSum(float x, float y) {
    return x + y;
}

float isMax(float x, float y) {
    float large;
    if (x > y) {
        large = x;
    } else {
        large = y;
    }
    return large;
}

int main() {
    float a;
    float b;

    printf("Enter the first number: ");
    scanf("%f", &a);