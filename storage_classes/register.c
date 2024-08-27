// to print the register storage class
#include <stdio.h>

void registerExample() {
    register int a = 20;
    printf("Value of a (register): %d\n", a);
}

int main() {
    registerExample();
    return 0;
}

