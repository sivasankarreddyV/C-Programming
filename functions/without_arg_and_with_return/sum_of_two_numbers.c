// to print the sum of two numbers
// without arguments and with return type
#include <stdio.h>

int sum();

int main() {
    int result;

    result = sum();
    printf("The sum of two numbers is: %d\n", result);

    return 0;
}

int sum() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    return num1 + num2;
}

