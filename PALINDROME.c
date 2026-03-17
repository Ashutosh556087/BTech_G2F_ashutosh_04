#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    // Use the scanf function to read the user's input
    scanf("%d", &n);

    // Store the original number for comparison later
    original = n;

    // Loop continues as long as n is not 0
    while (n != 0) {
        // Extract the last digit
        remainder = n % 10;

        // Build the reversed number
        reversed = reversed * 10 + remainder;

        // Remove the last digit from n
        n /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
