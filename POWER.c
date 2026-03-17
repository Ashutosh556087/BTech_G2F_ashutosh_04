#include <stdio.h>

int main() {
    int base, exp;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    // Loop to calculate power
    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    printf("Result: %lld\n", result);
    return 0;
}

