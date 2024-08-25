#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    union Data *ptr;

    // Point the pointer to the address of the union
    ptr = &data;

    // Accessing and modifying union members using pointer
    ptr->i = 42;
    printf("data.i: %d\n", ptr->i);

    ptr->f = 3.14f;
    printf("data.f: %f\n", ptr->f);

    snprintf(ptr->str, sizeof(ptr->str), "Hello");
    printf("data.str: %s\n", ptr->str);

    return 0;
}
