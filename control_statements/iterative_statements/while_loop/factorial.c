// to print the factorial of a number
// using while loop
#include <stdio.h>

int main() {
    int num;  
    int factorial = 1;
    int i = 1;
    printf("the number is:%d",num);
    scanf("%d",&num);
    
    while (i <= num) {
        factorial *= i;
        i++;
    }
    
    printf("Factorial of %d is %d\n", num, factorial);
    
    return 0;
}

