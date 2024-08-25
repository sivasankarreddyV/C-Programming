// Using realloc() to Resize Memory
// This example demonstrates how to use realloc() to resize an already allocated memory block.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, new_size, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc
    arr = (int*) malloc(n * sizeof(int));
    
    // Check if memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Storing values in allocated memory
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Printing original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resizing the allocated memory using realloc
    printf("Enter new size of array: ");
    scanf("%d", &new_size);

    arr = (int*) realloc(arr, new_size * sizeof(int));
    
    // Check if memory has been reallocated successfully
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // If the array size increased, initialize the new elements
    if (new_size > n) {
        for (i = n; i < new_size; i++) {
            arr[i] = i + 1;
        }
    }

    // Printing resized array
    printf("Resized array: ");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

