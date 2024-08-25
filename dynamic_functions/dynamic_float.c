// Dynamic Memory Allocation for a Single Float
#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr;

    // Dynamically allocate memory for one float
    ptr = (float*) malloc(sizeof(float));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 3.14f;

    // Print the value stored in the dynamically allocated memory
    printf("Value of the allocated float: %.2f\n", *ptr);

    // Free the allocated memory
    free(ptr);

    return 0;
}

