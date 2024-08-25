// Dynamic Memory Allocation for a Single Integer
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Dynamically allocate memory for one integer
    ptr = (int*) malloc(sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 42;

    // Print the value stored in the dynamically allocated memory
    printf("Value of the allocated integer: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    return 0;
}

