#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int greatest;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Third Number: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        greatest = a;
    } else if (b > a && b > c) {
        greatest = b;
    } else {
        greatest = c;
    }

    printf("The Greatest is: %d\n", greatest);

    return 0;
}