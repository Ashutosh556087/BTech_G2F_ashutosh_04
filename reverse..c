#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop continues as long as n is not 0
    while (n != 0) {
        remainder = n % 10;      // Extract the last digit (e.g., 123 % 10 = 3)
        reverse = reverse * 10 + remainder; // Build the reverse number (e.g., 0*10 + 3 = 3; next 3*10 + 2 = 32)
        n /= 10;                 // Remove the last digit from n (e.g., 123 / 10 = 12)
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}
