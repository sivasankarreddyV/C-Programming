// Using malloc() to Allocate Memory
// This example demonstrates how to use malloc() to allocate memory for an array of integers

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
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

    // Printing values
    printf("Allocated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

