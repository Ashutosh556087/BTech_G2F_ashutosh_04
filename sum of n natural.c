#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n); //

   
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    // For loop to calculate the sum
    for (i = 1; i <= n; ++i) {
        sum += i; // sum = sum + i;
    }

    // Print the result
    printf("Sum of the first %d natural numbers = %d\n", n, sum); //

    return 0; // Indicate successful execution
}
