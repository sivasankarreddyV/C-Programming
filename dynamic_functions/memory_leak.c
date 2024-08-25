// Example of Memory Leak
// This example demonstrates what happens if you forget to free dynamically allocated memory, leading to a memory leak.

#include <stdio.h>
#include <stdlib.h>

void allocateMemory() {
    int *arr;

    // Dynamically allocate memory using malloc
    arr = (int*) malloc(10 * sizeof(int));
    
    // Check if memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Using the allocated memory
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Forgot to free the allocated memory
    // free(arr); // This line is commented out, leading to a memory leak
}

int main() {
    allocateMemory();

    // Allocating more memory in main, not freeing previous allocation
    allocateMemory();

    return 0;
}

