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

    printf("Enter the second number: ");
    scanf("%f", &b);

    float sum = isSum(a, b);
    float max = isMax(a, b);

    printf("The sum is: %.2f\n", sum);
    printf("The maximum number is: %.2f\n", max);

    return 0;
}