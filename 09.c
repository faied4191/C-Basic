#include <stdio.h>

float isSum(float x, float y) {
    return x + y;
}

int main() {
    float a;
    float b;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    float sum = isSum(a, b);

    printf("The sum is: %.2f\n", sum);

    return 0;
}