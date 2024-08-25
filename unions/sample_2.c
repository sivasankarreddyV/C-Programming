#include <stdio.h>

union Number {
    int i;
    char c;
};

int main() {
    union Number x;

    x.i = 65; // Ascci value of A is 65
    printf("Interpreted as int: %d\n", x.i);
    printf("Interpreted as float: %c\n", x.c);

    return 0;
}
