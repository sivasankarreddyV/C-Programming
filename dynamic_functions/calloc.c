// Using calloc() to Allocate Memory
// This example demonstrates how to use calloc() to allocate memory for an array of integers, which initializes all elements to zero.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using calloc
    arr = (int*) calloc(n, sizeof(int));
    
    // Check if memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Printing the values (should all be zero)
    printf("Allocated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

