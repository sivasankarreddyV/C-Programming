// Handling Memory Allocation Failure
// This example demonstrates how to handle memory allocation failure gracefully
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 100000000; // Attempt to allocate a large block of memory

    // Dynamically allocate memory using malloc
    arr = (int*) malloc(n * sizeof(int));
    
    // Check if memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory allocation failed! Not enough memory.\n");
        exit(1);
    }

    // If allocation is successful
    printf("Memory allocated successfully!\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

