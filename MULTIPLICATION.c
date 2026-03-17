#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    
    // Read the input from the user
    scanf("%d", &n);

    // Print the header for the table
    printf("Multiplication table of %d:\n", n);
    printf("--------------------------\n");

    // Loop from 1 to 10 to generate the table
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;
}
