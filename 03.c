#include <stdio.h>

int main() {
    float a;
    float b;
    float sum;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    sum = a + b;

    printf("The Sum is: %.2f\n", sum);

    return 0;
}