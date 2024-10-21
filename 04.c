#include <stdio.h>

int main() {
    int a;

    printf("Enter Hour of the Day: ");
    scanf("%d", &a);

    if (a < 10) {
        printf("Good morning");
    } else if (a < 20) {
        printf("Good day");
    } else {
        printf("Good evening");
    }

    return 0;
}