#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

Binary(int n) {
    if (n > 0) {
        Binary(n / 2);
        printf("%d", n % 2);
    }
}
int main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("0");
    }
    else {
        Binary(number);
    }
    return 0;
}
