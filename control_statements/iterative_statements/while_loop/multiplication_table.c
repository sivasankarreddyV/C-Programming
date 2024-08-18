// to print the multiplication table
// using while loop
#include <stdio.h>

int main() {
    int num = 5; 
    int i = 1;
    
    printf("Multiplication table for %d:\n", num);
    
    while (i <= 10) {
        printf("%d * %d = %d\n", num, i, num * i);
        i++; 
    }
    
    return 0;
}

