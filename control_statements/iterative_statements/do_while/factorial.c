// to  print the factorial of a given number
// using dop while
#include <stdio.h>

int main() {
    int num = 5;
    int factorial = 1;
    int i = 1;
    
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    
    printf("Factorial of %d is %d\n", num, factorial);
    
    return 0;
}

