#include <stdio.h>

int main() {
    int n, i;
    // Use float or double to store the sum for floating-point accuracy
    float sum = 0.0; 

    printf("Enter the value of N (the number of terms): ");
    scanf("%d", &n);

    // Loop from 1 to N to calculate each term and add to the sum
    for (i = 1; i <= n; i++) {
        // Type casting to float is crucial to avoid integer division
        sum += (float)1 / i; 
    }

    printf("Sum of the series is: %f\n", sum);

    return 0;
}
