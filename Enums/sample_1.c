#include <stdio.h>

// Define an enum for days of the week
enum Weekday {
    Sunday,     // 0
    Monday,     // 1
    Tuesday,    // 2
    Wednesday,  // 3
    Thursday,   // 4
    Friday,     // 5
    Saturday    // 6
};

int main() {
    // Declare a variable of type enum Weekday
    enum Weekday today;

    // Assign a value to the enum variable
    today = Saturday;

    // Print the value stored in the enum
    printf("Today is day number: %d\n", today);

    return 0;
}

