#include <stdio.h>

extern int z;  // Declaration of z

void externExample() {
    printf("Value of z (extern): %d\n", z);
}

