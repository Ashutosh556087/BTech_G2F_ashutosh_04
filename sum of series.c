#include <stdio.h>

int main() {
    int size, i, largest;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size]; // Declaring array

    // Input array elements
    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Assume the first element is the largest
    largest = array[0];

    // Traverse the array from the second element
    for (i = 1; i < size; i++) {
        // Update 'largest' if the current element is greater
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Print the largest element
    printf("The largest element present in the given array is: %d\n", largest);

    return 0;
}

